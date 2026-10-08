<!-- Profile README: github.com/AhmedHamadaIT/AhmedHamadaIT -->

<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:0f2027,50:203a43,100:2c5364&height=210&section=header&text=Ahmed%20Hamada&fontSize=54&fontColor=ffffff&fontAlignY=36&desc=AI%20Engineer%20%7C%20Computer%20Vision%20%C2%B7%20Edge%20AI%20%C2%B7%20LLMs&descSize=20&descAlignY=58" alt="Ahmed Hamada banner" />

<a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=500&size=20&pause=1200&color=4FC3F7&center=true&vCenter=true&width=760&lines=I+build+and+deploy+production+AI+systems;Real-time+multi-camera+Computer+Vision+on+Edge+devices;LLM-powered+apps+%26+Arabic+Document+AI+design;From+business+requirements+to+PRDs+to+architecture" alt="Typing SVG" /></a>

<br/>

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Ahmed%20Hamada-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/ahmed-hamadaai/)
[![Kaggle](https://img.shields.io/badge/Kaggle-ahmedxhamada-20BEFF?style=for-the-badge&logo=kaggle&logoColor=white)](https://www.kaggle.com/ahmedxhamada)
[![Email](https://img.shields.io/badge/Email-Contact%20Me-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:ahmed1hamada1shabaan@gmail.com)
![Location](https://img.shields.io/badge/Cairo-Egypt-2C5364?style=for-the-badge&logo=googlemaps&logoColor=white)

</div>

---

## 👋 About Me

AI Engineer at **EyeGo** building production AI systems: real-time, multi-camera Computer Vision on edge hardware (NVIDIA Jetson, Sophon), plus LLM-powered applications and Arabic Document AI design. I work across the full path from **business requirements → PRD → system architecture → deployed service**.

| | |
|---|---|
| 🎯 **Focus** | Production AI · Computer Vision · Edge AI · LLM/VLM · RAG · Agentic AI |
| 🏗️ **Strength** | System architecture, real-time pipelines, AI deployment |
| 🎓 **Education** | B.Sc. Computer Science & Artificial Intelligence, Fayoum University (2020–2024) |
| 📍 **Based in** | Cairo, Egypt |

---

## 🧱 What I Build

```mermaid
flowchart LR
    A["📷 RTSP cameras"] --> B["FFmpeg stream reader"]
    B --> C["FrameBus"]
    C --> D["Named Tasks<br/>YOLO modules · ReID · face blur"]
    D --> E[("Redis")]
    D --> F[("Qdrant<br/>vector search")]
    D --> G["FastAPI services"]
    G --> H["📡 SSE live updates"]
    D -. "Jetson / Sophon" .- I["⚡ Edge inference"]
```

<sub>Simplified view of the multi-process vision platform I architect at EyeGo.</sub>

---

## 💼 Experience

### 🔹 AI Engineer — EyeGo *(June 2025 – Present)*

- **Architecture:** architected a multi-process Vision Pipeline platform (FastAPI, Redis, custom FrameBus + Named Tasks) running concurrent per-camera AI tasks across deployments of 20–100 cameras, with roughly 2–5 s latency.
- **Product & design:** contributed to the product requirements and system design for the LLM capabilities of EyeGo and EyeGo Studio.
- **Computer Vision & Edge AI:** shipped 8 YOLO-based compliance modules; deployed real-time inference on NVIDIA Jetson and Sophon; built cross-camera person ReID with Qdrant.
- **Backend & privacy:** FastAPI + RTSP + SSE services, a custom FFmpeg stream reader (HEVC → H.264), and a Redis-controlled face-blurring pipeline for saved evidence imagery.

### 🔹 Machine Learning Engineer — Codsoft *(July 2023 – September 2023)*

- Developed and deployed ML models with a focus on feature engineering and performance optimization, collaborating with cross-functional teams.

---

## 🚀 Featured Projects

<table>
<tr>
<td width="50%" valign="top">

### 📄 Basira — Arabic Document AI Platform
*Design & PRD · simulated 1.2M-page archive*

On-prem, air-gap-ready platform: OCR, hybrid semantic search, knowledge graph, cited Q&A, and a human-approved triage agent.

`FastAPI` `Qdrant` `Neo4j` `vLLM` `LangGraph`

</td>
<td width="50%" valign="top">

### 📹 Computer Vision Analytics Suite
*Real-time dashboards*

People counting, heatmaps, dwell time, and crowd density. 92% tracking accuracy with DeepSORT; 4 concurrent streams at 30 FPS.

`YOLOv8` `OpenCV` `DeepSORT` `FastAPI` `Streamlit`

</td>
</tr>
<tr>
<td width="50%" valign="top">

### 🎙️ Arabic Multimodal Voice AI
*TTS fine-tuning + voice ordering*

Fine-tuned Arabic TTS (Qwen3-TTS, F5-TTS, Chatterbox) on Gulf/Najdi dialects; built a Whisper → LLM → TTS drive-through ordering pipeline.

`Qwen3-TTS` `F5-TTS` `Whisper`

</td>
<td width="50%" valign="top">

### 📰 Financial News Sentiment (DistilBERT)
*NLP fine-tuning*

Fine-tuned DistilBERT on financial news: 84% accuracy, 0.84 F1.

`PyTorch` `Hugging Face` `NLP`

</td>
</tr>
</table>

### 🏆 Kaggle

| Notebook | What it does |
|---|---|
| [Child Mind Institute: Detect BFRB with Sensor](https://www.kaggle.com/code/ahmedxhamada/child-mind-institute-detect-bfrb-with-sensor) | Sensor-based ML to detect body-focused repetitive behaviors |
| [Airline Delay Cause Analysis](https://www.kaggle.com/code/ahmedxhamada/airline-delay-cause) | Analysis and predictive modeling of delay causes |
| [Customer Segmentation](https://www.kaggle.com/code/ahmedxhamada/customer-segmentation) | Clustering for targeted marketing |

---

## 🛠️ Tech Stack

<div align="center">

![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![PyTorch](https://img.shields.io/badge/PyTorch-EE4C2C?style=flat-square&logo=pytorch&logoColor=white)
![TensorFlow](https://img.shields.io/badge/TensorFlow-FF6F00?style=flat-square&logo=tensorflow&logoColor=white)
![OpenCV](https://img.shields.io/badge/OpenCV-5C3EE8?style=flat-square&logo=opencv&logoColor=white)
![Hugging Face](https://img.shields.io/badge/Hugging%20Face-FFD21E?style=flat-square&logo=huggingface&logoColor=black)
![LangChain](https://img.shields.io/badge/LangChain-1C3C3C?style=flat-square&logo=langchain&logoColor=white)
![FastAPI](https://img.shields.io/badge/FastAPI-009688?style=flat-square&logo=fastapi&logoColor=white)
![Flask](https://img.shields.io/badge/Flask-000000?style=flat-square&logo=flask&logoColor=white)
![Redis](https://img.shields.io/badge/Redis-DC382D?style=flat-square&logo=redis&logoColor=white)
![PostgreSQL](https://img.shields.io/badge/PostgreSQL-4169E1?style=flat-square&logo=postgresql&logoColor=white)
![MongoDB](https://img.shields.io/badge/MongoDB-47A248?style=flat-square&logo=mongodb&logoColor=white)
![Docker](https://img.shields.io/badge/Docker-2496ED?style=flat-square&logo=docker&logoColor=white)
![NVIDIA](https://img.shields.io/badge/NVIDIA%20Jetson-76B900?style=flat-square&logo=nvidia&logoColor=white)
![FFmpeg](https://img.shields.io/badge/FFmpeg-007808?style=flat-square&logo=ffmpeg&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=flat-square&logo=git&logoColor=white)
![GCP](https://img.shields.io/badge/Google%20Cloud-4285F4?style=flat-square&logo=googlecloud&logoColor=white)

</div>

| Area | Skills |
|---|---|
| 👁️ **Computer Vision** | YOLOv8, Object Detection, Multi-Object Tracking (ByteTrack, DeepSORT), Person Re-ID, OCR, SAM, Grounding DINO, Pose Estimation |
| 🤖 **LLM / VLM / Agents** | RAG, Agentic & Multi-Agent Systems, LangChain, LangGraph, MCP, Tool Calling, GPT-4/4o, Gemini, Qwen-VL |
| 🔎 **Retrieval** | Qdrant, Pinecone, ChromaDB, Semantic Search, Re-ranking, RAGAS, DeepEval |
| 🔊 **Speech & Multimodal** | Whisper, Qwen3-TTS, F5-TTS, QLoRA, TTS/ASR Fine-Tuning |
| ⚡ **Edge & Optimization** | NVIDIA Jetson, Sophon, TensorRT, ONNX |
| 🧩 **Backend & Real-time** | FastAPI, Flask, REST, WebSockets, SSE, RTSP, LiveKit, WebRTC |
| 🚢 **MLOps & Deployment** | Docker, CI/CD, MLflow, Model Monitoring |
| 📐 **Product & Architecture** | PRDs, Requirements Analysis, System Architecture, AI Solution Design |
| 📊 **Data** | Pandas, NumPy, Scikit-learn, SQL, Matplotlib, Seaborn, Power BI |

---

## 📊 GitHub Stats

<div align="center">

<img height="165" src="https://github-readme-stats.vercel.app/api?username=AhmedHamadaIT&show_icons=true&include_all_commits=true&count_private=true&theme=tokyonight&hide_border=true" alt="GitHub stats" />
<img height="165" src="https://github-readme-stats.vercel.app/api/top-langs/?username=AhmedHamadaIT&layout=compact&langs_count=6&theme=tokyonight&hide_border=true" alt="Top languages" />

<img src="https://streak-stats.demolab.com?user=AhmedHamadaIT&theme=tokyonight&hide_border=true" alt="GitHub streak" />

<img width="100%" src="https://github-readme-activity-graph.vercel.app/graph?username=AhmedHamadaIT&theme=tokyo-night&hide_border=true&area=true" alt="Contribution activity graph" />

</div>

---

## 🎓 Education & Certifications

- 🎓 **B.Sc. Computer Science & Artificial Intelligence**, Fayoum University (2020–2024). Graduation project (team leader): deep-learning brain tumor classification.
- 📐 Software Design and Architecture Specialization — Coursera
- 🧠 Machine Learning Specialization · Neural Networks and Deep Learning — Andrew Ng, Coursera
- 🤗 Large Language Models with Hugging Face
- 📋 Google Project Management: Professional Certificate

---

## 📫 Get in Touch

<div align="center">

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/ahmed-hamadaai/)
[![Kaggle](https://img.shields.io/badge/Kaggle-20BEFF?style=for-the-badge&logo=kaggle&logoColor=white)](https://www.kaggle.com/ahmedxhamada)
[![Gmail](https://img.shields.io/badge/Gmail-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:ahmed1hamada1shabaan@gmail.com)

<sub>Open to collaboration and new opportunities.</sub>

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:2c5364,100:0f2027&height=100&section=footer" alt="footer" />

</div>
