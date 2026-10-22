/*
 * FUN_00609700 (117 B) — Look up an object, else allocate and register.
 *
 * __thiscall (ECX = this), RET 8 (two stack params). Looks up param_1
 * via FUN_00416b60; if found, bumps a refcount. Otherwise builds a new
 * object via FUN_006097f0/FUN_00607e80 and registers it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00416b60(void *param);
extern void __stdcall FUN_006097f0(int a, int b, int c);
extern void * __cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00607e80(int a, int b, int c);
extern void __stdcall FUN_00416a90(int a, void *b);

__declspec(naked) void __fastcall FUN_00609700(void *this, int param1, int param2)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     eax, [esp + 0xc]
        lea     ebx, [esi + 0x14]
        push    eax
        mov     ecx, ebx
        call    FUN_00416b60
        test    eax, eax
        jz      l_alloc
        mov     ecx, dword ptr [eax + 0x30]
        inc     ecx
        pop     esi
        mov     dword ptr [eax + 0x30], ecx
        pop     ebx
        ret     8
    l_alloc:
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    1
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_006097f0
        fmul    dword ptr [esi + 0x3c]
        push    0x34
        fstp    dword ptr [esp + 0x18]
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_zero
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_00607e80
        jmp     l_cont
    l_zero:
        xor     eax, eax
    l_cont:
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_00416a90
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
