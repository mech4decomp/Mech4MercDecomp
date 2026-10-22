/*
 * FUN_00759D10 (139 B) — __thiscall (ECX=this), RET 0xc (three stack params).
 *
 * Allocates a 0x14-byte object, initializes it via FUN_0075a780, then
 * registers it with the engine via FUN_0075a140 and an IAT callback.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084c0(int size, void *tag);
extern void *__cdecl FUN_0075a780(void);
extern void *__cdecl FUN_0075a140(void);

extern int g_849308;          /* DAT_00849308 */
extern void *g_8aace0;        /* IAT function pointer */

__declspec(naked) char __stdcall FUN_00759d10(void *param1, void *param2, void *param3)
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
        jz      short L_d3e
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_0075a780
        mov     edi, eax
        jmp     short L_d40
L_d3e:
        xor     edi, edi
L_d40:
        push    edi
        mov     ecx, esi
        call    FUN_0075a140
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esi + 0x810]
        push    0x0
        push    0x0
        push    eax
        push    0x0
        push    ecx
        xor     edx, edx
        mov     dx, word ptr [esi + 0x818]
        push    0xc
        push    0x1
        push    0x1
        push    edx
        push    ebx
        call    dword ptr [g_8aace0]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        jz      short L_d93
        mov     eax, dword ptr [esi]
        lea     ecx, [esi + 0xe]
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0xc
L_d93:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret     0xc
    }
}
