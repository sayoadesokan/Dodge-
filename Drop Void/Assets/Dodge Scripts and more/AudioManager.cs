using UnityEngine;
using System; 
using UnityEngine.Audio; 

public class AudioManager : MonoBehaviour
{

    public Sound[] sounds;
    public admanagerunity admanager;

    public static AudioManager instance; 
    void Awake()
    {
        if (instance == null)
            instance = this;
        else
        {
            Destroy(gameObject);
            return;  
        }

        DontDestroyOnLoad(gameObject);
        DontDestroyOnLoad(admanager);

        foreach (Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();  
            s.source.clip = s.clip;

            s.source.volume = s.volume;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop; 
        }
    }
    void Start()
    {
        Play("Theme"); 
    }
    public void Play( string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!"); 
            return;
        }
        s.source.Play(); 
    }

}
