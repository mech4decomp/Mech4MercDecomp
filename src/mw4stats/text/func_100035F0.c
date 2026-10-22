/*
 * FUN_100035f0 (75 B, __fastcall) - thread-start helper. Locks +0x24,
 * checks flag +0x21, optionally creates thread via IAT 0x10021040.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void *g_10021048; /* IAT: LeaveCriticalSection */
extern void *g_10021044; /* IAT: EnterCriticalSection */
extern void *g_10021040; /* IAT: CreateThread */

__declspec(naked) void __cdecl FUN_100035f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        lea     edi, [esi+0x24]
        push    edi
        call    dword ptr [g_10021048]
        mov     al, byte ptr [esi+0x21]
        test    al, al
        jz      L1
        push    edi
        call    dword ptr [g_10021044]
        pop     edi
        xor     al, al
        pop     esi
        ret
L1:
        lea     eax, [esi+0x1c]
        push    eax
        push    0
        push    esi
        push    0x10003850
        push    0
        push    0
        mov     byte ptr [esi+0x21], 1
        mov     byte ptr [esi+0x20], 0
        call    dword ptr [g_10021040]
        push    edi
        call    dword ptr [g_10021044]
        pop     edi
        mov     al, 1
        pop     esi
        ret
    }
}
