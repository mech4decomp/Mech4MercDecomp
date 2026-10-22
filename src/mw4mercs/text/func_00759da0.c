/*
 * FUN_00759DA0 (136 B) — __thiscall (ECX=this), RET 8 (two stack params).
 *
 * Allocates a 0x14-byte object, initializes it via FUN_0075a850, then
 * registers it with the engine via FUN_0075a140 and an IAT callback.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084c0(int size, void *tag);
extern void *__cdecl FUN_0075a850(void);
extern void *__cdecl FUN_0075a140(void);

extern int g_849308;          /* DAT_00849308 */
extern void *g_8aace0;        /* IAT function pointer */

__declspec(naked) char __stdcall FUN_00759da0(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [g_849308]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0x14
        mov     esi, ecx
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      short L_dce
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_0075a850
        mov     edi, eax
        jmp     short L_dd0
L_dce:
        xor     edi, edi
L_dd0:
        push    edi
        mov     ecx, esi
        call    FUN_0075a140
        mov     ebx, dword ptr [esi + 0x810]
        push    0x0
        push    0x0
        add     edi, 0xc
        push    edi
        push    0x0
        push    0x1
        xor     eax, eax
        mov     ax, word ptr [esi + 0x818]
        push    0x1
        push    0x4
        push    0x1
        push    eax
        push    ebx
        call    dword ptr [g_8aace0]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        jz      short L_e20
        mov     edx, dword ptr [esi]
        lea     eax, [esi + 0xe]
        push    eax
        push    ebx
        push    0x3
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x8
L_e20:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret     0x8
    }
}
