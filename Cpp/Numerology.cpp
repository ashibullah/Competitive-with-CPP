#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter your nickname/common name and know about yourself\n            ";
    string name;
    cin >> name;
    int sum[1000], count = 0;
    int x = name.length();
    cout<<"----- Results for "<<name<<" -----\n";
    for (int i = 0; i < x; i++)
    {
        if (name[i] == 'A' || name[i] == 'J' || name[i] == 'S' || name[i] == 'a' || name[i] == 'j' || name[i] == 's')
        {
            sum[count] = 1;
            count++;
        }
        else if (name[i] == 'B' || name[i] == 'K' || name[i] == 'T' || name[i] == 'b' || name[i] == 'k' || name[i] == 't')
        {
            sum[count] = 2;
            count++;
        }

        else if (name[i] == 'C' || name[i] == 'c' || name[i] == 'L' || name[i] == 'l' || name[i] == 'U' || name[i] == 'u')
        {
            sum[count] = 3;
            count++;
        }

        else if (name[i] == 'D' || name[i] == 'd' || name[i] == 'M' || name[i] == 'm' || name[i] == 'V' || name[i] == 'v')
        {
            sum[count] = 4;
            count++;
        }

        else if (name[i] == 'E' || name[i] == 'e' || name[i] == 'n' || name[i] == 'N' || name[i] == 'W' || name[i] == 'w')
        {
            sum[count] = 5;
            count++;
        }

        else if (name[i] == 'F' || name[i] == 'f' || name[i] == 'O' || name[i] == 'X' || name[i] == 'x' || name[i] == 'o')
        {
            sum[count] = 6;
            count++;
        }

        else if (name[i] == 'G' || name[i] == 'g' || name[i] == 'P' || name[i] == 'p' || name[i] == 'Y' || name[i] == 'y')
        {
            sum[count] = 7;
            count++;
        }

        else if (name[i] == 'H' || name[i] == 'h' || name[i] == 'Q' || name[i] == 'q' || name[i] == 'Z' || name[i] == 'z')
        {
            sum[count] = 8;
            count++;
        }

        else if (name[i] == 'I' || name[i] == 'i' || name[i] == 'R' || name[i] == 'r')
        {
            sum[count] = 9;
            count++;
        }
    }
    sum[x] = 0;
    for (int i = 0; i < x; i++)
    {
        sum[x] += sum[i];
    }
    if (sum[x] > 9)
    {
        sum[x] = (sum[x] / 10) + (sum[x] % 10);
    }

    if (sum[x]==11)
    {
        cout<<"\nYour are confidence and worry can plague those born with it. This can mean that you struggle with trusting and sharpening their unique skills. But, if they can overcome this, they will be able to channel their intuition and maximize their emotional awareness of the world around them.\nYou can become incredibly spiritual, especially since these energies are coursing their veins every single day. They usually believe in a higher power -- but that has more to do with accessing higher truths about life than following the dogma of organized religion.";
    }
    else if (sum[x]==22)
    {
        cout<<"\nOne of the things that set apart you from others is their extreme dedication. They aren't afraid of putting in the hard work -- but this isn't about climbing the corporate ladder. They feel an allegiance to others, working hard to be of service to others and improving humankind in some way. This can lead to a fear of failure, but they can turn this around and use it as motivation to keep pushing forward.";
    }
    else if (sum[x]==33)
    {
        cout<<"\nYou can feel like both a blessing and a curse. Individuals with this Life Path can experience a level of spiritual understanding and empathy that most others couldn't begin to comprehend. However, in order for them to achieve this, they must face a series of obstacles throughout their lives that will test them. One of their greatest lessons is to heal themselves before they can exercise their power of healing others.";
    }
    
    else switch (sum[x])
    {
    case 1:
        cout<<"\nPeople born with a Life Path number 1 are on a lifelong mission to exert their independence and step into their personal power. They carry a natural air of authority as a leader who likes to be the first to try something new. A strong desire for manifestation keeps them moving and improving.";
        break;
    
    case 2: cout<<"\nPeople were blessed with beautiful hearts that they use to bring beautiful relationships into their lives.\nFrom romantic and business partnerships to family and friendships, these bonds are the most valuable thing in life to a person . They thrive in being part of a team and will do everything in their power to make it a happy, easy, and successful union. They are incredibly giving and do well at creating long-lasting connections with others.";
    break;

    case 3: cout<<"\nCharming, romantic, and full of creative energy, and know how to embrace life! They tend to see the world through rose-colored lenses where everything looks like an opportunity and the chances for expression and enjoyment are endless. They have a tendency to be skilled communicators and have a knack for coming up with and sharing brilliant ideas. They makes an excellent journalist, blogger, social media influencer, or author.";
    break;
    
    case 4:  cout<<"\nDedicated, patient, down to earth, and hard-working, and they are a great source of stability in our world. They aren't interested in rocking the boat because they know that constant, steady effort is the surest path to their goals. Life Path 4 people are consistent in their methods and their moods and they keep themselves composed. They experience a range of emotions just like everyone else, but their practical way of processing their feelings keeps them from going to extremes.";
    break;
    
    case 5: cout<<"\nPeople are on a lifelong adventure. They are ready for anything and want to soak up every experience this world has to offer. They tend to learn by living and don't allow themselves to get stuck in any situation that has outworn its interest. The moment things start to get humdrum, a person with this Life Path will move on to something more fascinating.";
    break;

    case 6: cout<<"\nPeople embrace their emotions and lead with their heart. They give off a warm and inviting energy that others want to be around. They enjoy many rich relationships throughout their life, both romantic and friendly. Whether these Life Path people encounter someone who is just like them or someone who is entirely different, they will treat them the same: with kindness, respect, and support. Some Life Path numbers only see black and white, They can see and accept the infinite shades of grey between.";
    break;

    case 7: cout<<"\nYou are eternal students of the universe. They are introspective individuals with an unquenchable thirst for knowledge and they enjoy looking into the inner workings of things. Someone with this Life Path is a true thinker who lets their mind lead the way. Pretty much from the moment of birth, they are able to skillfully combine the exacting side of their brain with their divine intuitive side to learn about, process, and make sense of life itself.";
    break;

    case 8: cout<<"\nPersonality is one of hard work and hard lessons. People born with this Life Path number get their worth from accomplishing great things -- the bigger the goal, the more satisfying it feels when they achieve it. Money and material goods are important to them because they are rewards and reminders of all the effort put in. People with this Life Path direct all their energy into creating a life of success and abundance.";
    break;
    case 9: cout<<"\nThere's a special kind of magic that follows people born. They embody the wisdom of a sage, but not by chance -- they have fought their way through many challenges to reach this point and have gained immeasurable strength and awareness along the way. They will often find themselves in a position of providing support and advice and this feels natural to them. The knowledge they have gained can be incredibly valuable to others on their own journeys.";
    break;
    default:
        break;
    }
    cout<<"\n\n";
    int p;
    cin>>p;
}
