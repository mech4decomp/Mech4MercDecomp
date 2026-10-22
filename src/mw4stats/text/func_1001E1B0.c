/*
 * FUN_1001e1b0 (284 B) - __stdcall (4 args, RET 0x10). Allocates and
 * initializes a 0x140-byte stats object (via FUN_1000a120), stores it at
 * [arg1+0x18], fills fields from args, and sets up a string buffer at
 * +0xa8 (copying arg2's string via FUN_100016b0). Returns 0 on success,
 * else 0x8004025a/0x8004025b.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;   /* IAT: free */
extern void *g_100210f4;   /* IAT: wcslen */

extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_1000e2f0(void);

__declspec(naked) int __cdecl FUN_1001e1b0(void)
{
    __asm {
        push    ebx
        push    esi
        push    0x140
        call    FUN_1000a120
        xor     esi, esi
        add     esp, 0x4
        cmp     eax, esi
        jz      L_e20d
        mov     ecx, 0x400
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        mov     dword ptr [eax + 0xc], esi
        mov     dword ptr [eax + 0x10], esi
        mov     dword ptr [eax + 0x14], esi
        mov     dword ptr [eax + 0x18], esi
        mov     dword ptr [eax + 0x1c], esi
        mov     dword ptr [eax + 0x20], esi
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0xa8], esi
        mov     dword ptr [eax + 0xac], esi
        mov     dword ptr [eax + 0xb0], esi
        mov     dword ptr [eax + 0xb4], esi
        mov     dword ptr [eax + 0xb8], esi
        mov     dword ptr [eax + 0xbc], ecx
        jmp     L_e20f
L_e20d:
        xor     eax, eax
L_e20f:
        mov     ebx, dword ptr [esp + 0xc]
        cmp     eax, esi
        mov     dword ptr [ebx + 0x18], eax
        jnz     L_e224
        pop     esi
        mov     eax, 0x8004025a
        pop     ebx
        ret     0x10
L_e224:
        mov     ecx, dword ptr [esp + 0x14]
        push    ebp
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [ebx + 0x18]
        mov     eax, dword ptr [ebx + 0xc]
        push    edi
        mov     dword ptr [edx + 0x4], eax
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [ecx + 0x8], edx
        mov     eax, dword ptr [ebx + 0x18]
        mov     dword ptr [eax + 0xc], 0x7
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [eax + 0xc], esi
        jbe     L_e256
        mov     ebp, dword ptr [eax]
        jmp     L_e25b
L_e256:
        mov     ebp, 0x100274ec
L_e25b:
        mov     edi, dword ptr [ebx + 0x18]
        add     edi, 0xa8
        cmp     dword ptr [edi + 0xc], esi
        jbe     L_e279
        mov     eax, dword ptr [edi]
        cmp     eax, esi
        jz      L_e279
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_e279:
        cmp     ebp, esi
        mov     dword ptr [edi], esi
        mov     dword ptr [edi + 0x10], esi
        mov     dword ptr [edi + 0xc], esi
        jz      L_e2a0
        cmp     word ptr [ebp], si
        jz      L_e2a0
        push    ebp
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, edi
        shl     eax, 0x1
        push    eax
        push    ebp
        call    FUN_100016b0
L_e2a0:
        mov     eax, dword ptr [ebx + 0x18]
        pop     edi
        pop     ebp
        cmp     dword ptr [eax + 0xb4], esi
        jnz     L_e2b7
        pop     esi
        mov     eax, 0x8004025b
        pop     ebx
        ret     0x10
L_e2b7:
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ebx + 0x14]
        push    ecx
        push    eax
        push    edx
        call    FUN_1000e2f0
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
