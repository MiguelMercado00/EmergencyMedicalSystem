# EmergencyMedicalSystem by Miguel Mercado

Hello everyone! This is a code that I was working on for a period of 2 days, dedicating approximately 3 or 4 hours a day to it, but I had it created a week ago, 
this project is about a medical emergency system that is entered into Random patients with their different characteristics and symptoms, then depending on their symptoms 
they go through specific triage, they receive their respective medical attention and then depending on how serious their situation is, they are given the appropriate exit.
I hope you like it, blessings.


Aim: The purpose of this exam is to design and model the data structures necessary for an emergency medical system that effectively manages patient admission, 
triage, care tracking, and discharge determination. In this context, the implementation of data structures for a system that requires efficient processing and management 
of patients based on the severity of their medical conditions is addressed. Description of the Medical Emergency System:

The medical emergency system stands as a critical environment where patients in various health situations are received. The comprehensive process includes the following phases:

Triage: Upon entering the system, each patient is subjected to a meticulous triage process for the purpose of evaluating the urgency of their medical care. 
This process results in the classification of patients into the following groups: 
a. Code Blue: Requires immediate medical attention. (for cardiac or loss of consciousness) 
b. Urgent Stability: Needs stabilization of vital signs and fluids within a period of time between 10 and 20 minutes. 
c. Normal Emergencies: Care is estimated to take between 20 and 40 minutes. 
d. Minor Emergencies: Your health condition is considered less pressing, with a waiting time of more than 40 minutes.

Medical Care: After triage, each patient goes through a sequence of medical care states that incorporate (these states are not all mandatory and vary depending on the 
diagnosis and decision of the doctor in the emergency room):
a. Medical examinations (mandatory for normal emergencies). 
b. Diagnostic tests (mandatory for minor emergencies). 
c. healing procedures, 
d. Stabilization of ailments and monitoring of vital signs in a range of time (mandatory for code blue triage and urgent stability).

Patient Dismissal: Finally, at the conclusion of medical care, the patient can experience one of the following outputs: to. 
a. Discharge: The patient is discharged and authorized to leave the healthcare system. emergencies. 
b. Voluntary Discharge: The patient decides to withdraw voluntarily before receiving complete recommended medical care. 
c. Referred for Hospitalization: Requires transfer to a hospital for an continued specialized care. 
d. Referred to a Specialist Doctor: Must be evaluated by a doctor specialized for more specific attention. and. 
e. Morgue: In case of death, the patient is transferred to the morgue. Implementation Requirements:

- Randomly generate demographic and health status information (minimum two medical ailments) for a pool of at least 20 patients.
If the patient's care exceeds the minimum time, then assign the output according to the following conditions:
- Code blue and urgent stability: Morgue.
- Normal and minor emergencies: Voluntary discharge.
Design and develop a data structure that completely captures relevant patient information, covering personal aspects (ID, names, surnames, age, weight),
health status and priority of care according to the triage process.

Implement specific data structures to manage patient waiting data structures in each of the mentioned triage groups.
Design a data structure that allows the orderly recording of patients' medical states and diagnoses during their medical care.
Each patient must undergo at least two medical services, 1 is mandatory (as defined above) and the other is random.
Establish a functional system that enables health care state transitions and determines patient discharge according to predefined guidelines.
Print the status change of each patient on the console.

List of symptoms for urgent stability:
- Tachycardia, high blood pressure with headache, loss of balance, severe asphyxiation, hemorrhages, extreme pain, poisoning. 
List of symptoms for normal emergencies:
- Chest pain, palpitations, high blood pressure, mild suffocation, nasal trauma. 
List of symptoms for minor emergencies:
- Tonsillitis, pharyngitis, diarrhea without dehydration and uncontrolled high blood pressure.
