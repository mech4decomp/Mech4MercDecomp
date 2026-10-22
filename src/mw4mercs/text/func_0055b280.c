/*
 * FUN_0x0055b280 (122 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055b280(void)
{
    

extern void __cdecl FUN_10041fd73(void);
extern void __cdecl FUN_1004ebcbf(void);
extern void __cdecl FUN_10041fc92(void);
extern void __cdecl FUN_1004ebe49(void);
extern void __cdecl FUN_10041fd27(void);
extern void __cdecl FUN_10041fd1c(void);
extern void __cdecl FUN_1004ebe75(void);
__asm {
mov     al, [esp + 4]
        test    al, al
        push    esi
        push    edi
        je      L_else
        lea     edi, [ecx + 0x720]
        mov     ecx, edi
        call FUN_10041fd73
        test    eax, eax
        jne     L_done
        push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push    0x0077DD68
        push    3
        call FUN_1004ebcbf
        add     esp, 0x18
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call FUN_10041fc92
        push    1
        mov     ecx, esi
        call FUN_1004ebe49
        pop     edi
        pop     esi
        ret     4
L_else:
        lea     esi, [ecx + 0x720]
        mov     ecx, esi
        call FUN_10041fd27
        test    eax, eax
        je      L_done
        mov     ecx, esi
        call FUN_10041fd1c
        mov     ecx, eax
        call FUN_1004ebe75
L_done:
        pop     edi
        pop     esi
        ret     4
    }


}
