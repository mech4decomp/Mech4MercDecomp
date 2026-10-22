/*
 * FUN_006120c0 (96 B) — __thiscall.
 *
 * Releases a child object (vtable[0] call), iterates a list at +0x30 via
 * FUN_0041fd80/FUN_0041fcb0, then invokes vtable[0x3c] and vtable[0x38]
 * storing results at +0x38/+0x3c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_006120c0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4]
        xor     ebx, ebx
        cmp     ecx, ebx
        push    edi
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], ebx
        jz      L_skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x4], ebx
    L_skip1:
        lea     edi, [esi + 0x30]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_skip2
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     eax, ebx
        jz      L_skip2
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
    L_skip2:
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x2c], ebx
        call    dword ptr [eax + 0x3c]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x38], eax
        call    dword ptr [edx + 0x38]
        pop     edi
        mov     dword ptr [esi + 0x3c], eax
        pop     esi
        pop     ebx
        ret
    }
}
