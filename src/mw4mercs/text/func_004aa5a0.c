/*
 * FUN_004aa5a0 (161 B) — MLR subsystem constructor (__thiscall, RET 0xc).
 * Calls base ctor FUN_004ac110, sets vtable 0x770478, allocates a 0xa4-byte
 * object, initializes it via FUN_004861f0, and sets up a sub-object at
 * this+0xa0 via a virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9598;
extern void __cdecl FUN_004ac110(int, int, int);
extern void __cdecl FUN_006f4950(int);
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_004861f0(int, int);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004aa5a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_004ac110
        mov     edx, dword ptr [g_007b9598]
        push    edx
        mov     dword ptr [esi], 0x770478
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      alloc_fail
        mov     ecx, dword ptr [ebx + 0x268]
        push    0
        push    ecx
        mov     ecx, eax
        call    FUN_004861f0
        mov     edi, eax
        jmp     alloc_done
alloc_fail:
        xor     edi, edi
alloc_done:
        mov     dword ptr [esi + 0xb0], edi
        call    FUN_006f49a0
        mov     eax, dword ptr [ebx + 0x268]
        mov     edx, dword ptr [esi + 0xa8]
        lea     ecx, [eax + eax*2]
        shl     ecx, 4
        lea     ebx, [edx + ecx]
        lea     eax, [eax + eax*2]
        lea     edx, [edx + eax*4]
        lea     eax, [edx + ecx]
        mov     edx, dword ptr [edi]
        push    eax
        mov     dword ptr [esi + 0xb8], eax
        push    ebx
        lea     eax, [esi + 0xa0]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0xb4], ebx
        call    dword ptr [edx + 4]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
