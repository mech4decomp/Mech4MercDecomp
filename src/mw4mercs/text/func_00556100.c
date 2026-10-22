/*
 * FUN_0x00556100 (120 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00556100(void)
{
    

extern void __cdecl FUN_0061acc8(void);
extern void __cdecl FUN_0061acf1(void);
extern void __cdecl FUN_10041fd2b(void);
extern void __cdecl FUN_005ba043(void);
extern void __cdecl FUN_0055b497(void);
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esi + 0x384]
        mov     eax, [edi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jne     L_exit
        mov     al, [esi + 0x589]
        test    al, al
        jne     L_exit
        mov     al, [esi + 0x5AC]
        test    al, al
        jne     L_exit
        push    0x8000
        call FUN_0061acc8
        mov     ecx, eax
        call FUN_0061acf1
        test    al, al
        je      L_exit
        mov     ecx, [esp + 0x0C]
        mov     eax, [ecx + 0x10]
        test    eax, eax
        jle     L_exit
        mov     edi, [edi + 0x3D4]
        test    edi, edi
        je      L_exit
        push    0
        lea     ecx, [esi + 0x6A0]
        call FUN_10041fd2b
        push    eax
        mov     ecx, edi
        call FUN_005ba043
        test    eax, eax
        je      L_exit
        push    eax
        mov     ecx, esi
        call FUN_0055b497
L_exit:
        pop     edi
        pop     esi
        ret     4
    }


}
