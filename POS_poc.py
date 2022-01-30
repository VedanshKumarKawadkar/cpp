import nltk
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize, sent_tokenize
stop_words = set(stopwords.words('english'))
  
txt = "Aim: To investigate the demographics, management and outcomes of patients with newly diagnosed diabetes in covid-19 infection admitted to Queen Elizabeth Hospital, Birmingham. Method(s): All patients with a new diagnosis of diabetes on their admission with covid-19 pneumonia (pre-dexamethasone use) between March and June 2020 were examined. Demographics, comorbidities, medication history, investigations, management and outcomes were analysed. Result(s): Twelve patients were identified. Demographic analysis revealed (all median [IQR]); Age 59.5 [51.5-69.3] years, body mass index 27.4 [26.0-28.9] kg/m2 and length of admission 21.5 [7.5-28.8] days. The majority of patients were male (9/12) and most were diagnosed with type 2 diabetes (9/12). Seven patients had no diabetes symptoms prior to admission and positive family history was uncommon (1/12). Median glucose reading on admission was 16.0 [10.0-29.0] mmol/l, HbA1c 62.5 [47-104] mmol/mol. During admission, median percentage of glucose in target (5-15 mmol/l) for individual patients was 71.6 [46.4-91.0]% and median percentage of glucose levels in hypoglycaemic range (<4 mmol/l) was 0.8 [0.0-2.6]%. Intravenous insulin was required by half of patients (6/12). 5/12 (41.7%) patients were admitted to the critical care unit versus 69/497 (13.8%) patients with pre-existing diabetes and covid-19, median length of stay was 18.5 [13.3-23.0] days versus 7 [3-13] days. 3/12 patients died during admission (25.0%) versus 112/497(23%) patients with pre-existing diabetes and covid-19. Of the nine patients discharged, six required long-term antidiabetes therapy; five with insulin and one with oral diabetic treatment. Conclusion(s): A new diagnosis of diabetes in combination with covid-19 infection is associated with high rates of complication relating to glucose control and need for intensive care during admission."
tokenized = sent_tokenize(txt)

result = []

for i in tokenized:     
    # Word tokenizers is used to find the words and punctuation in a string
    wordsList = nltk.word_tokenize(i)
  
    # removing stop words from wordList
    wordsList = [w for w in wordsList if not w in stop_words] 
  
    #  Using a Tagger. Which is part-of-speech tagger or POS-tagger. 
    tagged = nltk.pos_tag(wordsList)
  
    result += (tagged)
for x in result:
    print(x)