/*
 * FUN_006297d0 (163 B) — __thiscall (ECX = this). Sets vtable pointer
 * 0x78d0a4 at [this], then for each of 8 member pointers calls its
 * virtual [0] with arg 1 if non-null. Calls FUN_00629880, frees
 * *(this+0x50) via FUN_004084e0, then FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00629880(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00561730(void);

__declspec(naked) void __fastcall FUN_006297d0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x80]
        test    ecx, ecx
        mov     dword ptr [esi], 0x78d0a4
        jz      L_ea
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_ea:
        mov     ecx, dword ptr [esi + 0x84]
        test    ecx, ecx
        jz      L_fa
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_fa:
        mov     ecx, dword ptr [esi + 0x88]
        test    ecx, ecx
        jz      L_10a
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_10a:
        mov     ecx, dword ptr [esi + 0x68]
        test    ecx, ecx
        jz      L_117
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_117:
        mov     ecx, dword ptr [esi + 0x6c]
        test    ecx, ecx
        jz      L_124
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_124:
        mov     ecx, dword ptr [esi + 0x70]
        test    ecx, ecx
        jz      L_131
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_131:
        mov     ecx, dword ptr [esi + 0x7c]
        test    ecx, ecx
        jz      L_13e
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_13e:
        mov     ecx, dword ptr [esi + 0x8c]
        test    ecx, ecx
        jz      L_14e
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_14e:
        mov     ecx, esi
        call    FUN_00629880
        mov     eax, dword ptr [esi + 0x50]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L_169
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_169:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        pop     ecx
        ret
    }
}
