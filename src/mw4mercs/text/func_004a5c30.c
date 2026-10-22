/*
 * FUN_004a5c30 (225 B) — MLR object constructor variant (__thiscall, RET 0x4).
 * Initializes sub-objects at +0x2b8..+0x380 via FUN_004ae3c0 and computes
 * a buffer size from param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9380(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_004a5c30(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x525
        call    FUN_004a9380
        lea     ecx, [esi+0x2b8]
        mov     dword ptr [esi+0x2b4], 0x6
        call    FUN_004ae3c0
        mov     eax, 0x2
        mov     dword ptr [esi+0x2c4], eax
        mov     dword ptr [esi+0x2dc], 0x9
        mov     dword ptr [esi+0x2e0], 0x0
        mov     dword ptr [esi+0x2e8], eax
        mov     ebx, 0x4
        lea     ecx, [esi+0x304]
        mov     dword ptr [esi+0x300], ebx
        call    FUN_004ae3c0
        mov     edi, 0x1
        mov     dword ptr [esi+0x310], edi
        lea     ecx, [esi+0x324]
        mov     dword ptr [esi+0x320], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi+0x330], edi
        lea     ecx, [esi+0x344]
        mov     dword ptr [esi+0x340], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi+0x350], edi
        lea     ecx, [esi+0x364]
        mov     dword ptr [esi+0x360], ebx
        call    FUN_004ae3c0
        mov     eax, dword ptr [esp+0x10]
        add     eax, 0x2
        lea     ecx, [eax+eax*2+0x3f]
        mov     dword ptr [esi+0x370], edi
        mov     dword ptr [esi+0x380], eax
        shl     ecx, 0x2
        pop     edi
        mov     dword ptr [esi], 0x770394
        mov     dword ptr [esi+0x270], 0xdc
        mov     dword ptr [esi+0x26c], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
