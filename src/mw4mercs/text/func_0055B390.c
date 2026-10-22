/*
 * FUN_0055b390 (170 B) — Object method. Handles sound-related
 * logic with flag check.
 *
 * __thiscall (ECX = this), 1 param (byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055B390(void)
{
    

extern void __cdecl FUN_10041fd73(void);
extern void __cdecl FUN_1004ebcbb(void);
extern void __cdecl FUN_10041fc8e(void);
extern void __cdecl FUN_1004ebe45(void);
extern void __cdecl FUN_10041fd23(void);
extern void __cdecl FUN_10041fd18(void);
extern void __cdecl FUN_1004ebe71(void);
extern void __cdecl FUN_1004ebc61(void);
extern void __cdecl FUN_1004ebdf5(void);
__asm {
mov     al, byte ptr [esp + 4]
        test    al, al
        push    esi
        push    edi
        jz      L_param_zero
        lea     edi, [ecx + 0x728]
        mov     ecx, edi
        call FUN_10041fd73
        test    eax, eax
        jnz     L_end
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    0x77ddd4
        push    3
        call FUN_1004ebcbb
        add     esp, 0x18
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call FUN_10041fc8e
        push    1
        mov     ecx, esi
        call FUN_1004ebe45
        pop     edi
        pop     esi
        ret     4

L_param_zero:
        lea     esi, [ecx + 0x728]
        mov     ecx, esi
        call FUN_10041fd23
        test    eax, eax
        jz      L_end
        mov     ecx, esi
        call FUN_10041fd18
        mov     ecx, eax
        call FUN_1004ebe71
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    0x77ddb0
        push    3
        call FUN_1004ebc61
        add     esp, 0x18
        push    0
        mov     ecx, eax
        call FUN_1004ebdf5
L_end:
        pop     edi
        pop     esi
        ret     4
    }


}
