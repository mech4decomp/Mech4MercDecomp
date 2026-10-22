/*
 * FUN_004f2600 (170 B) — MLR/Adept AudioRenderer destructor (__thiscall).
 * Restores vtable 0x775020, destroys sub-objects (FUN_00417980),
 * frees buffers (FUN_004084e0), and tail-calls FUN_004f32f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004f32f0(void);

__declspec(naked) void FUN_004f2600(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        lea     ecx, [ebx + 0x80]
        mov     dword ptr [ebx], 0x775020
        call    FUN_00417980
        lea     ecx, [ebx + 0x78]
        call    FUN_00417980
        lea     ecx, [ebx + 0x6c]
        call    FUN_00417980
        lea     ecx, [ebx + 0x58]
        mov     dword ptr [ecx], 0x775040
        call    FUN_00416320
        mov     eax, dword ptr [ebx + 0x50]
        test    eax, eax
        jz      L_2643
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2643:
        mov     ecx, dword ptr [ebx + 0x48]
        test    ecx, ecx
        jz      L_26a0
        mov     eax, dword ptr [ecx - 0x4]
        lea     edx, [ecx - 0x4]
        push    esi
        lea     esi, [eax + eax*4]
        lea     esi, [eax + esi*2]
        dec     eax
        push    edi
        mov     dword ptr [esp + 0xc], edx
        lea     edi, [ecx + esi*4]
        js      L_2695
        push    ebp
        lea     esi, [edi + 0x10]
        lea     ebp, [eax + 0x1]
L_2669:
        sub     esi, 0x2c
        lea     ecx, [esi + 0x8]
        sub     edi, 0x2c
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00417980
        lea     ecx, [esi - 0x8]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        dec     ebp
        jnz     L_2669
        mov     edx, dword ptr [esp + 0x10]
        pop     ebp
L_2695:
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
L_26a0:
        mov     ecx, ebx
        call    FUN_004f32f0
        pop     ebx
        pop     ecx
        ret
    }
}
