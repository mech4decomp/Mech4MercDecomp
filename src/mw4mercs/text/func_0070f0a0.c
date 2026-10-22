/*
 * FUN_0070F0A0 (197 B) - Global state reset / mode switch helper.
 *
 * Reads global 0x87C59C (a mode). If it is 5 or 6, frees two objects
 * (0x85A218, 0x85A21C) via FUN_00740DB0 and copies 0x85B610/0x85B60C
 * into 0x8AAEB4/0x8AAEB8. If the mode is one of {3,0xC,9,0xA,4,0xD,5,6},
 * sets 0x87BC34=1, 0x8AAEB4=0x85B610, and clears 0x87C59C. Finally
 * zeroes a set of globals and sets 0x7B70C4=1.
 *
 * __cdecl, no args, RET.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_87c59c;
extern int g_85a218;
extern int g_85a21c;
extern int g_85b610;
extern int g_85b60c;
extern int g_8aaeb4;
extern int g_8aaeb8;
extern char g_87bc34;
extern int g_85a270;
extern char g_87bc0a;
extern char g_87bc09;
extern int g_87b64c;
extern int g_87bc40;
extern int g_87bc30;
extern int g_7b70c4;
extern void __cdecl FUN_00740db0(int);

__declspec(naked) void FUN_0070f0a0(void)
{
    __asm {
        mov     eax, dword ptr [g_87c59c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, 5
        jz      loc_f0b2
        cmp     eax, 6
        jnz     loc_f0f6
loc_f0b2:
        mov     ecx, dword ptr [g_85a218]
        cmp     ecx, ebx
        jz      loc_f0de
        push    ecx
        call    FUN_00740db0
        mov     eax, dword ptr [g_85a21c]
        push    eax
        mov     dword ptr [g_85a218], ebx
        call    FUN_00740db0
        mov     eax, dword ptr [g_87c59c]
        mov     dword ptr [g_85a21c], ebx
loc_f0de:
        mov     ecx, dword ptr [g_85b610]
        mov     edx, dword ptr [g_85b60c]
        mov     dword ptr [g_8aaeb4], ecx
        mov     dword ptr [g_8aaeb8], edx
loc_f0f6:
        cmp     eax, 3
        mov     ecx, 1
        jz      loc_f123
        cmp     eax, 0xc
        jz      loc_f123
        cmp     eax, 9
        jz      loc_f123
        cmp     eax, 0xa
        jz      loc_f123
        cmp     eax, 4
        jz      loc_f123
        cmp     eax, 0xd
        jz      loc_f123
        cmp     eax, 5
        jz      loc_f123
        cmp     eax, 6
        jnz     loc_f139
loc_f123:
        mov     eax, dword ptr [g_85b610]
        mov     byte ptr [g_87bc34], cl
        mov     dword ptr [g_8aaeb4], eax
        mov     dword ptr [g_87c59c], ebx
loc_f139:
        mov     dword ptr [g_85a270], ebx
        mov     byte ptr [g_87bc0a], bl
        mov     byte ptr [g_87bc09], bl
        mov     dword ptr [g_87b64c], ebx
        mov     dword ptr [g_87bc40], ebx
        mov     dword ptr [g_87bc30], ebx
        mov     dword ptr [g_7b70c4], ecx
        pop     ebx
        ret
    }
}
