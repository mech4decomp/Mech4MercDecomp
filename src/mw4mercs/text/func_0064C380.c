/*
 * FUN_0064C380 (67 B) — .text data block (block 0x64C04F). Calls
 * FUN_0064BF90; on success copies a table entry (indexed by [eax+0x20] into
 * [esi+0x24]) out to the caller's buffer via rep movsd. Returns 1 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064BF90(void);

__declspec(naked) void FUN_0064C380(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    0
        push    0
        mov     esi, ecx
        push    eax
        call    FUN_0064BF90
        test    eax, eax
        jne     L_c399
        pop     esi
        ret     0xc
    L_c399:
        cmp     dword ptr [eax+0x1c], 1
        je      L_c3a5
        xor     eax, eax
        pop     esi
        ret     0xc
    L_c3a5:
        mov     edx, dword ptr [eax+0x20]
        mov     eax, dword ptr [esi+0x24]
        mov     esi, dword ptr [eax+edx*4]
        mov     ecx, dword ptr [esp+0xc]
        push    edi
        mov     edi, dword ptr [esp+0x14]
        rep movsd
        pop     edi
        mov     eax, 1
        pop     esi
        ret     0xc
    }
}
