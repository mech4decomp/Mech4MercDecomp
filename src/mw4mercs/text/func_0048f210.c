/*
 * FUN_0048f210 (145 B) — MLR light-array constructor (__thiscall, RET 0x8).
 * Initializes a light-array object: computes sizes from a shift count,
 * allocates the element buffer, zeroes the hash table, and sets the vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004084d0(void);

extern int g_007da84c;

__declspec(naked) void FUN_0048f210(void)
{
    __asm {
        mov     eax, dword ptr [g_007da84c]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, 0x1
        shl     edx, cl
        mov     eax, 0xe
        sub     eax, ecx
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], edx
        mov     ecx, eax
        mov     edx, 0x1
        shl     edx, cl
        mov     dword ptr [esi + 0x18], eax
        xor     ebx, ebx
        mov     dword ptr [esi + 0x8], ebx
        lea     eax, [edx*0x4]
        push    eax
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76fee4
        mov     dword ptr [esi + 0x1c], edx
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x10028], eax
        mov     dword ptr [esi + 0x10034], ecx
        add     esp, 0x4
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x1002c], ebx
        mov     dword ptr [esi + 0x10030], ebx
        mov     dword ptr [esi + 0x24], ebx
        lea     edi, [esi + 0x28]
        xor     eax, eax
        mov     ecx, 0x4000
        rep     stosd
        pop     edi
        mov     dword ptr [esi + 0x10038], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
