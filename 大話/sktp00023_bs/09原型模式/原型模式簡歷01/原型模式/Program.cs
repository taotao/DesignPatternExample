﻿using System;
using System.Collections.Generic;
using System.Text;

namespace 原型模式
{
    class Program
    {
        static void Main(string[] args)
        {
            Resume a = new Resume("大鳥");
            a.SetPersonalInfo("男", "29");
            a.SetWorkExperience("1998-2000", "XX公司");

            Resume b = new Resume("大鳥");
            b.SetPersonalInfo("男", "29");
            b.SetWorkExperience("1998-2000", "XX公司");

            Resume c = new Resume("大鳥");
            c.SetPersonalInfo("男", "29");
            c.SetWorkExperience("1998-2000", "XX公司");


            a.Display();
            b.Display();
            c.Display();

            Console.Read();
        }
    }

    //履歷
    class Resume
    {
        private string name;
        private string sex;
        private string age;
        private string timeArea;
        private string company;

        public Resume(string name)
        {
            this.name = name;
        }

        //設置個人資訊
        public void SetPersonalInfo(string sex, string age)
        {
            this.sex = sex;
            this.age = age;
        }

        //設置工作經歷
        public void SetWorkExperience(string timeArea, string company)
        {
            this.timeArea = timeArea;
            this.company = company;
        }

        //顯示
        public void Display()
        {
            Console.WriteLine("{0} {1} {2}", name, sex, age);
            Console.WriteLine("工作經歷：{0} {1}", timeArea, company);
        }

    }

}
