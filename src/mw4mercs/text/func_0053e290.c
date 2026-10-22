/*
 * FUN_0053e290 (1305 B) — Mission file loader: reads a mission .mis file,
 * parses author/description/name, writes metadata to a stream, and
 * registers the mission.
 *
 * __stdcall, RET 8 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0041EE70(void);
extern void __cdecl FUN_006FC4D0(void);
extern void __cdecl FUN_0040DCA0(void);
extern void __cdecl FUN_0040ECC0(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_0041F030(void);
extern void __cdecl FUN_004CE190(void);
extern void __cdecl FUN_0040DE20(void);
extern void __cdecl FUN_0041EF60(void);

__declspec(naked) void __stdcall FUN_0053e290(void)
{
    

extern int DAT_007dd268;
extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
; mov eax, dword ptr [0x007DD268]
        mov eax, dword ptr [DAT_007dd268]

        mov     ecx, dword ptr [eax + 0x40970]
        sub     esp, 0xE4
        push    ebx
        push    esi
        push    edi
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_00412570

        push    0x779CB0
        lea     ecx, [esp + 0x1C]
        call    FUN_00412570

        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x14]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      loc_53E2F6
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E2F6
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E2F6:
        mov     ecx, dword ptr [esp + 0x18]
        push    0x779D60
        push    ecx
        lea     ecx, [esp + 0x1C]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      loc_53E32E
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E32E
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E32E:
        push    ebx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041EE70

        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    FUN_006FC4D0
        test    al, al
        jz      loc_53E4BD

        ; Resource\Missions path succeeded
        mov     eax, dword ptr [esp + 0x18]
        push    1
        push    ebx
        push    eax
        lea     ecx, [esp + 0x5C]
        call    FUN_0040DCA0

        push    0x772F0C
        lea     ecx, [esp + 0x54]
        call    FUN_0040ECC0
        mov     esi, eax
        cmp     esi, ebx
        jz      loc_53E4AF

        push    ebx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x77B728
        mov     ecx, esi
        mov     dword ptr [esp + 0x1C], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2C], ebx
        call    FUN_00411BF0

        push    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x772F0C
        mov     ecx, esi
        call    FUN_00411BF0

        push    ebx
        lea     eax, [esp + 0x24]
        push    eax
        push    0x77B720
        mov     ecx, esi
        call    FUN_00411BF0

        ; strlen(local_d0)
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x0C], ecx

        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041F030

        ; strlen(local_d4)
        mov     edi, dword ptr [esp + 0x1C]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        mov     dword ptr [esp + 0x0C], ecx

        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [esp + 0x1C]
        push    edx
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041F030

        ; strlen(local_dc)
        mov     edi, dword ptr [esp + 0x20]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        mov     dword ptr [esp + 0x0C], ecx

        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0xF4]  ; param_1
        ; mov eax, dword ptr [0x007DAB40]
        mov eax, dword ptr [DAT_007dab40]

        push    1
        lea     ecx, [esp + 0x2C]
        push    ecx
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        push    0x22
        push    edx
        xor     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CE190

        lea     ecx, [esp + 0x50]
        call    FUN_0040DE20

        lea     ecx, [esp + 0x28]
        call    FUN_0041EF60

        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      loc_53E6E5
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E6E5
        jmp     loc_53E6DC

    loc_53E4AF:
        lea     ecx, [esp + 0x50]
        call    FUN_0040DE20
        jmp     loc_53E734

    loc_53E4BD:
        push    0x779D68
        lea     ecx, [esp + 0x14]
        call    FUN_00412570

        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      loc_53E503
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E503
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E503:
        mov     ecx, dword ptr [esp + 0x10]
        push    0x779D60
        push    ecx
        lea     ecx, [esp + 0x1C]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      loc_53E53B
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E53B
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E53B:
        push    ebx
        lea     ecx, [esp + 0x54]
        call    FUN_0041EE70

        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006FC4D0
        test    al, al
        jz      loc_53E710

        ; Resource\UserMissions path succeeded
        mov     eax, dword ptr [esp + 0x10]
        push    1
        push    ebx
        push    eax
        lea     ecx, [esp + 0xAC]
        call    FUN_0040DCA0

        push    0x772F0C
        lea     ecx, [esp + 0xA4]
        call    FUN_0040ECC0
        mov     esi, eax
        cmp     esi, ebx
        jz      loc_53E704

        push    ebx
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x77B728
        mov     ecx, esi
        mov     dword ptr [esp + 0x2C], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411BF0

        push    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x772F0C
        mov     ecx, esi
        call    FUN_00411BF0

        push    ebx
        lea     eax, [esp + 0x18]
        push    eax
        push    0x77B720
        mov     ecx, esi
        call    FUN_00411BF0

        ; strlen(local_d0)
        mov     edi, dword ptr [esp + 0x20]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x0C], ecx

        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0041F030

        ; strlen(local_d4)
        mov     edi, dword ptr [esp + 0x1C]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        mov     dword ptr [esp + 0x0C], ecx

        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [esp + 0x1C]
        push    edx
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0041F030

        ; strlen(local_dc)
        mov     edi, dword ptr [esp + 0x14]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        mov     dword ptr [esp + 0x0C], ecx

        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0xF4]  ; param_1
        ; mov eax, dword ptr [0x007DAB40]
        mov eax, dword ptr [DAT_007dab40]

        push    1
        lea     ecx, [esp + 0x54]
        push    ecx
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        push    0x22
        push    edx
        xor     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CE190

        lea     ecx, [esp + 0xA0]
        call    FUN_0040DE20

        lea     ecx, [esp + 0x50]
        call    FUN_0041EF60

        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      loc_53E6C1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E6C1
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E6C1:
        lea     ecx, [esp + 0x28]
        call    FUN_0041EF60

        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      loc_53E6E5
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E6E5
    loc_53E6DC:
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E6E5:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebx
        jz      loc_53E79D
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E79D
        jmp     loc_53E794

    loc_53E704:
        lea     ecx, [esp + 0xA0]
        call    FUN_0040DE20

    loc_53E710:
        lea     ecx, [esp + 0x50]
        call    FUN_0041EF60

        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      loc_53E734
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E734
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E734:
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     esi, dword ptr [ecx]
        ; mov eax, dword ptr [0x007DAB40]
        mov eax, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [esp + 0xF4]  ; param_1
        push    1
        push    ebx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x14]
        push    0x22
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004CE190

        lea     ecx, [esp + 0x28]
        call    FUN_0041EF60

        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      loc_53E782
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E782
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E782:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebx
        jz      loc_53E79D
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_53E79D
    loc_53E794:
        push    eax
        call    FUN_004084E0
        add     esp, 4

    loc_53E79D:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xE4
        ret     8
    }


}
