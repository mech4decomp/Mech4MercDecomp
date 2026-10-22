/*
 * FUN_00676350 (141 B) — HUD lookup: converts a world position (scaled by
 * 0x007880fc) into grid coords, clamps them, and searches the hash table
 * at 0x0080da98 for a matching entry (key = grid x/y).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0080da60;
extern float g_007880fc;
extern float g_0080da5c;
extern float g_0080da58;
extern float g_00788100;
extern int g_0080da98;
extern int FUN_0075db4a(void);

__declspec(naked) void FUN_00676350(void)
{
    __asm {
        fld     dword ptr [g_0080da60]
        push    esi
        fmul    dword ptr [g_007880fc]
        push    edi
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_007880fc]
        mov     edi, dword ptr [esp+0xc]
        add     edi, eax
        call    FUN_0075db4a
        mov     esi, dword ptr [esp+0x10]
        add     esi, eax
        test    edi, edi
        jge     L1
        xor     edi, edi
        jmp     L2
L1:
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        fadd    st(0), st(0)
        call    FUN_0075db4a
        cmp     edi, eax
        jle     L2
        mov     edi, eax
L2:
        test    esi, esi
        jge     L3
        xor     esi, esi
        jmp     L4
L3:
        cmp     esi, 0x3ff
        jle     L4
        mov     esi, 0x3ff
L4:
        mov     eax, dword ptr [g_0080da98]
        mov     eax, dword ptr [eax+esi*4]
        test    eax, eax
        jz      L5
L6:
        cmp     dword ptr [eax], edi
        jnz     L7
        cmp     dword ptr [eax+0x4], esi
        jz      L8
L7:
        mov     eax, dword ptr [eax+0x10]
        test    eax, eax
        jnz     L6
L5:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L8:
        mov     eax, dword ptr [eax+0xc]
        pop     edi
        pop     esi
        ret
    }
}
