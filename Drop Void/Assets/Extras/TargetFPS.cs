using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetFPS : MonoBehaviour
{
    // Start is called before the first frame update
    private void Awake()
    {
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = -1;
    }
}
