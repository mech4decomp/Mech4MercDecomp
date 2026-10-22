/*
 * FUN_1000c4c0 (104 B) — __stdcall, RET 0x8 (2 params).
 * Object refcount helper: validate magic, InterlockedExchange, CS lock, decrement.
 */

extern void *g_1004908c;   /* IAT: InterlockedExchange */
extern void *g_10049068;   /* IAT: EnterCriticalSection */
extern void *g_10049064;   /* IAT: LeaveCriticalSection */
extern void *g_100491bc;   /* IAT: InterlockedDecrement */

__declspec(naked) void __stdcall FUN_1000c4c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        mov     eax, dword ptr [esp + 0xc]
        jz      L1
        cmp     dword ptr [eax - 0x4], 0x4c4f4f50
        jnz     L4
        mov     ecx, dword ptr [esi + 0x10]
        cmp     dword ptr [eax + ecx], 0x444e4550
        jnz     L4
        mov     dword ptr [eax - 0x4], 0x45524650
    L1:
        push    edi
        push    eax
        lea     edx, [esi + 0x20]
        push    edx
        call    dword ptr [g_1004908c]   /* InterlockedExchange */
        mov     edi, eax
        test    edi, edi
        jz      L2
        push    ebx
        lea     ebx, [esi + 0x24]
        push    ebx
        call    dword ptr [g_10049068]   /* EnterCriticalSection */
        mov     eax, dword ptr [esi + 0x1c]
        mov     dword ptr [edi], eax
        push    ebx
        mov     dword ptr [esi + 0x1c], edi
        call    dword ptr [g_10049064]   /* LeaveCriticalSection */
        pop     ebx
    L2:
        add     esi, 0xc
        push    esi
        call    dword ptr [g_100491bc]   /* InterlockedDecrement */
        pop     edi
    L4:
        pop     esi
        ret     0x8
    }
}
