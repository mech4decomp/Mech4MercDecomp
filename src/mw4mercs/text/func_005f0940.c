/*
 * FUN_005f0940 (129 B) — __thiscall. Reads a byte flag at this+0x170, updates
 * several float/int fields on the object returned by FUN_005f07c0, then
 * conditionally calls FUN_005b7060. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_005f07c0(void);
extern void *FUN_00416b60(unsigned int *p);
extern void FUN_005b7060(int a, int b);

__declspec(naked) int FUN_005f0940(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_005f07c0
        lea     ecx, [edi + 0x78]
        mov     esi, eax
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi + 0x3bc]
        mov     ebx, eax
        mov     ecx, dword ptr [ebx + 0x20]
        fld     dword ptr [ebx + 0x1c]
        mov     eax, dword ptr [esi + 0x3c0]
        sub     edx, ecx
        mov     dword ptr [esi + 0x3bc], edx
        mov     edx, dword ptr [ebx + 0x24]
        sub     eax, edx
        mov     dword ptr [esi + 0x3c0], eax
        xor     eax, eax
        mov     al, byte ptr [edi + 0x170]
        fsubr   dword ptr [esi + 0x3b8]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     ecx, [esi + 0x384]
        fstp    dword ptr [esi + 0x3b8]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_00416b60
        test    eax, eax
        jz      L1
        mov     edx, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [edi + 0x174]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_005b7060
L1:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret
    }
}
