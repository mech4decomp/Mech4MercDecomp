/* Auto-generated inline asm transcription for FUN_005669d0 */
#include <windows.h>

__declspec(naked) int FUN_005669d0(int param_1)
{
    

extern int DAT_0080d964;
extern int DAT_007dde2c;
extern void __cdecl FUN_1005666a8(void);
extern void __cdecl FUN_006fabc2(void);
extern void __cdecl FUN_100566682(void);
extern void __cdecl FUN_006fab9c(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fcab6(void);
extern void __cdecl FUN_10056663d(void);
extern void __cdecl FUN_006fab57(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415164(void);
extern int DAT_007f268c;
extern void __cdecl FUN_100415153(void);
extern void __cdecl FUN_10041512f(void);
extern void __cdecl FUN_1005665c1(void);
extern void __cdecl FUN_006faadb(void);
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        cmp     edi, -1
        jnz     L1
        mov eax, dword ptr [DAT_0080d964]
        pop     edi
        pop     esi
        pop     ebp
        ret
L1:
        mov al, byte ptr [DAT_007dde2c]
        mov     esi, edi
        sar     esi, 0x18
        test    al, al
        jz      L2
        test    esi, esi
        jge     L3
        push    0x77f724
        call FUN_1005666a8
        push    eax
        call FUN_006fabc2
        add     esp, 0x8
        test    eax, eax
        jz      L3
        int     3
L3:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L2
        cmp     esi, 0x12
        jl      L2
        push    0x77f724
        call FUN_100566682
        push    eax
        call FUN_006fab9c
        add     esp, 0x8
        test    eax, eax
        jz      L2
        int     3
L2:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        xor     ecx, 0x85739531
        call FUN_1004fcab6
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L4
        test    esi, esi
        jnz     L5
        push    0x77f724
        call FUN_10056663d
        push    eax
        call FUN_006fab57
        add     esp, 0x8
        test    eax, eax
        jz      L6
        int     3
        /* Duplicate return-0 path to match original layout */
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
L4:
        test    esi, esi
        jnz     L5
L6:
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
L5:
        cmp     esi, -1
        jnz     L7
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
L7:
        mov eax, dword ptr [DAT_007f24d8]
        mov     edi, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, edi
        call FUN_100415164
        test    al, al
        jnz     L8
        mov eax, dword ptr [DAT_007f268c]
        push    eax
        mov     ecx, edi
        call FUN_100415153
        cmp     al, 0x1
        jnz     L8
        mov     eax, dword ptr [esi + 0x2fc]
        pop     edi
        pop     esi
        pop     ebp
        ret
L8:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L9
        mov eax, dword ptr [DAT_007f24d8]
        push    eax
        mov     ecx, edi
        call FUN_10041512f
        test    al, al
        jnz     L9
        push    0x77f68c
        call FUN_1005665c1
        push    eax
        call FUN_006faadb
        add     esp, 0x8
        test    eax, eax
        jz      L9
        int     3
L9:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}
