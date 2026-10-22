/*
 * FUN_004a86c0 (79 B) — __thiscall MLR particle-count guard: clamps max
 * particle count, warns via FUN_006fabf0, then forwards to FUN_004a9550.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004a9550(void);

__declspec(naked) void FUN_004a86c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp+8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0x268]
        mov     eax, 0x155
        cmp     ecx, eax
        jle     L1
        test    bl, bl
        jz      L2
        mov     dword ptr [esi+0x268], eax
        mov     eax, dword ptr [esi+4]
        push    eax
        push    0x7b305c
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L1
        int     3
L1:
        push    ebx
        mov     ecx, esi
        call    FUN_004a9550
        pop     esi
        pop     ebx
        pop     ebp
        ret     4
L2:
        pop     esi
        xor     al, al
        pop     ebx
        pop     ebp
        ret     4
    }
}
