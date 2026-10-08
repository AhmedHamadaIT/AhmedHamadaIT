<!-- Profile README: github.com/AhmedHamadaIT/AhmedHamadaIT -->

<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:0b1220,50:0e3a5f,100:0891b2&height=230&section=header&text=Ahmed%20Hamada&fontSize=56&fontColor=ffffff&fontAlignY=36&desc=AI%20Engineer%20%7C%20AI%20Solutions%20%7C%20System%20Architecture&descSize=20&descAlignY=58" alt="Ahmed Hamada - AI Engineer, AI Solutions, System Architecture" />

<a href="https://github.com/AhmedHamadaIT"><img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=500&size=20&pause=1300&color=0EA5E9&center=true&vCenter=true&width=820&lines=I+build+and+deploy+production+AI+systems;Real-time+Computer+Vision+on+Edge+devices;LLM-powered+applications+and+RAG+systems;Arabic+Document+AI+and+knowledge+platforms;From+requirements+%E2%86%92+PRD+%E2%86%92+architecture+%E2%86%92+deployment" alt="Typing headline" /></a>

<br/>

![Computer Vision](https://img.shields.io/badge/Computer%20Vision-0f172a?style=for-the-badge&labelColor=0f172a&color=0f172a&logoColor=22d3ee)
![Edge AI](https://img.shields.io/badge/Edge%20AI-0f172a?style=for-the-badge&labelColor=0f172a)
![LLMs and RAG](https://img.shields.io/badge/LLMs%20%26%20RAG-0f172a?style=for-the-badge&labelColor=0f172a)
![Agentic AI](https://img.shields.io/badge/Agentic%20AI-0f172a?style=for-the-badge&labelColor=0f172a)
![Arabic Document AI](https://img.shields.io/badge/Arabic%20Document%20AI-0f172a?style=for-the-badge&labelColor=0f172a)

</div>

---

## 🎯 AI Engineer Profile

<table>
<tr>
<td width="50%" valign="top">
<b>🎯 Focus</b><br/>Production AI · AI solution design<br/><br/>
<b>🏗️ Architecture</b><br/>Multi-process real-time pipelines, PRD-to-system design<br/><br/>
<b>👁️ Computer Vision</b><br/>Multi-camera detection, tracking, cross-camera Re-ID<br/><br/>
<b>🤖 Generative AI</b><br/>LLM / VLM apps, RAG, agentic workflows
</td>
<td width="50%" valign="top">
<b>⚡ Edge AI</b><br/>NVIDIA Jetson, Sophon<br/><br/>
<b>📄 Document AI</b><br/>Arabic OCR, hybrid retrieval, knowledge graphs<br/><br/>
<b>🧠 Product / PRD</b><br/>Requirements to architecture to implementation<br/><br/>
<b>📍 Location</b> Cairo, Egypt<br/>
<b>🎓 Education</b> B.Sc. CS &amp; AI, Fayoum University
</td>
</tr>
</table>

> **AI Engineer at EyeGo, working across the full lifecycle:** I take business requirements, turn them into PRDs and AI solution designs, architect the system, build the AI and backend pipelines, and deploy them to production and edge infrastructure.

---

## 🧱 What I Build

```mermaid
flowchart TD
    A["Business requirements"] --> B["Product requirements / PRD"]
    B --> C["AI solution architecture"]
    C --> D1["👁️ Computer Vision<br/>Edge AI"]
    C --> D2["🤖 LLM / VLM<br/>RAG · Agents"]
    C --> D3["📄 Document AI<br/>OCR · Speech"]
    D1 --> E["Backend · APIs · Streaming"]
    D2 --> E
    D3 --> E
    E --> F["Cloud / edge deployment"]
    F --> G["Monitoring · evaluation"]

    classDef n fill:#0f172a,stroke:#22d3ee,color:#e2e8f0;
    class A,B,C,D1,D2,D3,E,F,G n;
```

---

## 🏭 Production Experience

### AI Engineer · EyeGo &nbsp;<sub>June 2025 – Present</sub>

<table align="center">
<tr>
<td align="center" width="20%"><h2>20–100</h2><sub>cameras<br/>(approx.)</sub></td>
<td align="center" width="20%"><h2>2–5 s</h2><sub>latency<br/>(approx.)</sub></td>
<td align="center" width="20%"><h2>8</h2><sub>YOLO-based<br/>modules</sub></td>
<td align="center" width="20%"><h2>Edge</h2><sub>real-time inference<br/>Jetson · Sophon</sub></td>
<td align="center" width="20%"><h2>Re-ID</h2><sub>cross-camera<br/>identity</sub></td>
</tr>
</table>

<table>
<tr>
<td width="50%" valign="top">

**🏗️ Architecture**
- Architected a multi-process Vision Pipeline platform (FastAPI, Redis, custom **FrameBus + Named Tasks**) for concurrent per-camera AI task execution across restaurant, café, and drive-through deployments.

**👁️ Computer Vision**
- Shipped 8 YOLO-based compliance modules: eating-violation detection, handwashing verification, cleanliness/obstruction monitoring, closing-procedure checks, and cup counting.
- Built cross-camera person re-identification with Qdrant and batched upserts.
- Built an AI vending-machine recommendation engine using behavior analysis and customer tracking.

**⚡ Edge AI**
- Deployed and optimized real-time inference on NVIDIA Jetson and Sophon under on-device latency and hardware constraints.

</td>
<td width="50%" valign="top">

**🧠 Product & AI Design**
- Contributed to the product requirements and system design for the LLM capabilities of EyeGo and EyeGo Studio, translating business requirements into PRDs and architecture.

**🔌 Backend & Streaming**
- Built FastAPI services integrating AI inference with RTSP multi-camera ingestion and Server-Sent Events for live updates.
- Wrote a custom FFmpeg subprocess stream reader, migrating ingestion from HEVC to H.264.

**🔐 Privacy**
- Implemented a per-camera face-blurring pipeline for saved evidence imagery, with Redis-backed real-time toggles.

</td>
</tr>
</table>

<sub>Earlier: **Machine Learning Engineer, Codsoft** (Jul – Sep 2023). Developed and deployed ML models with a focus on feature engineering and performance optimization.</sub>

### EyeGo vision platform architecture

```mermaid
flowchart TD
    CAM["📷 RTSP cameras"] --> FF["FFmpeg stream reader<br/>HEVC → H.264"]
    FF --> FB["FrameBus"]
    FB --> NT["Named AI tasks<br/>(per camera)"]

    subgraph EDGE["⚡ Edge inference · NVIDIA Jetson / Sophon"]
        direction LR
        Y["YOLO<br/>modules"]
        T["Tracking"]
        R["Person<br/>Re-ID"]
        B["Face<br/>blur"]
    end

    NT --> Y
    NT --> T
    NT --> R
    NT --> B

    Y --> RD[("Redis")]
    T --> RD
    B --> RD
    R --> QD[("Qdrant")]
    RD --> API["FastAPI"]
    QD --> API
    API --> OUT["📡 SSE · Evidence · Analytics"]

    classDef n fill:#0f172a,stroke:#22d3ee,color:#e2e8f0;
    class CAM,FF,FB,NT,Y,T,R,B,RD,QD,API,OUT n;
```

---

## 🧠 AI Solution Architecture

<table>
<tr>
<td width="46%" valign="top">

```text
┌─────────────────────────────────────────┐
│          AI SOLUTION LIFECYCLE          │
├─────────────────────────────────────────┤
│ 1  Business requirements                │
│    ↓                                    │
│ 2  PRD / use cases                      │
│    ↓                                    │
│ 3  Architecture & model selection       │
│    ↓                                    │
│ 4  Data · retrieval · agents            │
│    ↓                                    │
│ 5  Backend · APIs · streaming           │
│    ↓                                    │
│ 6  Cloud / edge deployment              │
│    ↓                                    │
│ 7  Evaluation · monitoring              │
└─────────────────────────────────────────┘
```

</td>
<td width="54%" valign="top">

I work across the **entire lifecycle** of an AI product rather than a single layer.

- **EyeGo:** requirements and PRDs, platform architecture, CV/AI pipelines, backend streaming, edge deployment.
- **Basira:** requirements analysis, PRD, and full system architecture for an Arabic Document AI platform (design stage).
- **Principle:** pick the right tool per task. Deterministic logic where it is safer, AI where it adds value.

</td>
</tr>
</table>

### Where product, engineering, and AI meet

```text
                  PRODUCT
            (requirements · PRDs)
                     ▲
                     │
   AI ◄──────────────┼──────────────► ENGINEERING
 (models · LLMs)     │          (backend · streaming)
                     ▼
                DEPLOYMENT
            (edge · production)
```

I work at the intersection of AI engineering, product requirements, and system architecture.

---

## 🚀 Featured AI Systems

<table>
<tr>
<td colspan="2" valign="top">

### 📄 Basira · Arabic Document AI & Knowledge Platform
**Flagship** · *Architecture / PRD design based on a simulated scenario (a 1.2M-page government archive). Design stage, not a production deployment.*

**Problem:** staff cannot find or connect decisions buried in a huge Arabic/English archive of scans and PDFs with inconsistent metadata.

**Capabilities:** OCR with fallback · hybrid semantic search · knowledge graph · cited answers · human-approved triage agent · ACLs enforced at retrieval · gold-set evaluation · on-prem / air-gap-ready.

`FastAPI` `Celery · Redis` `PostgreSQL` `Qdrant` `Neo4j` `vLLM` `LangGraph` `Keycloak` `Langfuse · Prometheus`

<!-- TODO: add link to Basira document / repo if made public -->

</td>
</tr>
<tr>
<td width="50%" valign="top">

### 📹 Computer Vision Analytics Suite
*Real-time dashboards*

**Problem:** turn live camera feeds into counts and zone analytics.

People counting (bi-directional), heatmaps, dwell time, crowd density. Reported 92% tracking accuracy with DeepSORT; 4 concurrent streams at 30 FPS.

`YOLOv8` `OpenCV` `DeepSORT` `FastAPI` `Streamlit`

<!-- TODO: add repo link -->

</td>
<td width="50%" valign="top">

### 🎙️ Arabic Multimodal Voice AI
*TTS fine-tuning + voice ordering*

**Problem:** natural Arabic voice interaction for ordering.

Fine-tuned Arabic TTS (Qwen3-TTS, F5-TTS, Chatterbox) on Gulf and Najdi dialects; built a Whisper → LLM → TTS drive-through ordering pipeline.

`Qwen3-TTS` `F5-TTS` `Whisper` `QLoRA`

<!-- TODO: add repo link -->

</td>
</tr>
<tr>
<td width="50%" valign="top">

### 📰 Financial News Sentiment
*NLP fine-tuning*

**Problem:** classify sentiment of financial news.

Fine-tuned DistilBERT with data preprocessing and visualization: 84% accuracy, 0.84 F1.

`PyTorch` `Hugging Face` `NLP`

<!-- TODO: add repo link -->

</td>
<td width="50%" valign="top">

### 🏆 Kaggle
*Selected notebooks*

- [Detect BFRB with Sensor Data](https://www.kaggle.com/code/ahmedxhamada/child-mind-institute-detect-bfrb-with-sensor)
- [Airline Delay Cause Analysis](https://www.kaggle.com/code/ahmedxhamada/airline-delay-cause)
- [Customer Segmentation](https://www.kaggle.com/code/ahmedxhamada/customer-segmentation)

</td>
</tr>
</table>

### Basira architecture <sub>(design)</sub>

```mermaid
flowchart TD
    D["📄 Documents<br/>scans · PDFs"] --> I["Ingestion<br/>FastAPI · Celery"]
    I --> O["OCR / parsing<br/>fast path + VLM fallback"]
    O --> C["Chunking · metadata"]
    C --> H{"Hybrid retrieval"}
    H --> V["Vector search<br/>Qdrant"]
    H --> K["Keyword search"]
    H --> G["Knowledge graph<br/>Neo4j"]
    V --> RR["Reranking"]
    K --> RR
    G --> RR
    RR --> L["LLM · vLLM"]
    L --> A["LangGraph agent"]
    A --> HA["👤 Human approval"]
    HA --> R["✅ Cited answer"]

    subgraph PLATFORM["Platform services"]
        direction LR
        P1[("PostgreSQL")]
        P2[("Redis")]
        P3["Keycloak<br/>identity · ACLs"]
        P4["Observability"]
    end

    classDef n fill:#0f172a,stroke:#22d3ee,color:#e2e8f0;
    class D,I,O,C,H,V,K,G,RR,L,A,HA,R,P1,P2,P3,P4 n;
```

---

## 🧩 AI Systems I Work With

<table>
<tr>
<td width="33%" valign="top"><b>👁️ Computer Vision</b><br/>YOLOv8 · DeepSORT / ByteTrack · Person Re-ID · OpenCV</td>
<td width="33%" valign="top"><b>⚡ Edge AI</b><br/>NVIDIA Jetson · Sophon · TensorRT · ONNX</td>
<td width="33%" valign="top"><b>🤖 LLM / VLM</b><br/>GPT-4/4o · Gemini · Qwen-VL · Florence-2</td>
</tr>
<tr>
<td valign="top"><b>🔎 RAG / Retrieval</b><br/>Qdrant · Semantic search · Reranking · RAGAS / DeepEval</td>
<td valign="top"><b>🧠 Agents</b><br/>LangGraph · LangChain · MCP · Tool calling</td>
<td valign="top"><b>📄 Document AI</b><br/>OCR · Hybrid retrieval · Knowledge graph <sub>(Basira design)</sub></td>
</tr>
<tr>
<td valign="top"><b>🎙️ Speech</b><br/>Whisper · Qwen3-TTS · F5-TTS · QLoRA</td>
<td valign="top"><b>🧩 Backend</b><br/>FastAPI · Redis · SSE / WebSockets · FFmpeg / RTSP</td>
<td valign="top"><b>🚢 MLOps</b><br/>Docker · CI/CD · MLflow · Model monitoring</td>
</tr>
</table>

### Technology stack

| Area | Technologies |
|:--|:--|
| **🤖 AI / ML** | `Python` `PyTorch` `TensorFlow` `OpenCV` `YOLOv8` `Hugging Face` `LangChain` `LangGraph` |
| **🧩 Backend & Streaming** | `FastAPI` `Flask` `Redis` `WebSockets / SSE` `FFmpeg` `RTSP` |
| **🔎 Data & Retrieval** | `Qdrant` `PostgreSQL` `MongoDB` `Neo4j` `Pinecone` `ChromaDB` |
| **🚢 Deployment** | `Docker` `Git` `CI/CD` `MLflow` |
| **⚡ Edge** | `NVIDIA Jetson` `Sophon` `TensorRT` `ONNX` |
| **☁️ Cloud** | `Google Cloud` |

### Core strengths

| Capability | Working depth | Level |
|:--|:--|:--|
| **Computer Vision** | 🟦🟦🟦🟦🟦🟦🟦🟦🟦 | Core |
| **Edge AI** | 🟦🟦🟦🟦🟦🟦🟦🟦 | Core |
| **Backend AI Systems** | 🟦🟦🟦🟦🟦🟦🟦🟦 | Strong |
| **AI Solution Architecture** | 🟦🟦🟦🟦🟦🟦🟦 | Strong |
| **LLM / RAG / Agents** | 🟦🟦🟦🟦🟦🟦🟦 | Strong |
| **Product / PRD** | 🟦🟦🟦🟦🟦🟦🟦 | Strong |
| **MLOps** | 🟦🟦🟦🟦🟦🟦 | Growing |

<sub>Self-assessed working depth and current focus, not a certification or benchmark.</sub>

---

## 📊 GitHub

<p align="center">
  <img height="165" src="https://github-readme-stats.vercel.app/api?username=AhmedHamadaIT&show_icons=true&include_all_commits=true&count_private=true&hide_rank=true&theme=tokyonight&hide_border=true" alt="GitHub stats" />
  <img height="165" src="https://github-readme-stats.vercel.app/api/top-langs/?username=AhmedHamadaIT&layout=compact&langs_count=6&hide=jupyter%20notebook,html,css,batchfile,powershell,shell&theme=tokyonight&hide_border=true" alt="Top languages" />
</p>

<p align="center"><sub>Stats reflect public repositories. Most production work (EyeGo) lives in private company repositories.</sub></p>

---

## 🎓 Education & Certifications

```text
2020 ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 2024
B.Sc. Computer Science & Artificial Intelligence · Fayoum University
```

Graduation project (team leader): deep-learning brain tumor classification.

| Certification | Provider |
|---|---|
| Software Design and Architecture Specialization | Coursera |
| Machine Learning Specialization | Andrew Ng, Coursera |
| Neural Networks and Deep Learning | Andrew Ng, Coursera |
| Large Language Models with Hugging Face | Hugging Face |
| Google Project Management: Professional Certificate | Google |

---

## 🚀 What I'm Interested In

- Senior AI Engineer and AI Solutions Engineer roles
- AI system architecture and AI product design
- Computer Vision and Edge AI
- LLM / RAG / agentic systems and Document AI

---

## 📫 Let's Connect

<div align="center">

Interested in AI systems, Computer Vision, Edge AI, or LLM architecture? Let's connect.

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/ahmed-hamadaai/)
[![GitHub](https://img.shields.io/badge/GitHub-0f172a?style=for-the-badge&logo=github&logoColor=white)](https://github.com/AhmedHamadaIT)
[![Kaggle](https://img.shields.io/badge/Kaggle-20BEFF?style=for-the-badge&logo=kaggle&logoColor=white)](https://www.kaggle.com/ahmedxhamada)
[![Email](https://img.shields.io/badge/Email-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:ahmed1hamada1shabaan@gmail.com)

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:0891b2,100:0b1220&height=90&section=footer" alt="footer" />

</div>
