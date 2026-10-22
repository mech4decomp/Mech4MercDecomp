/*
 * FUN_0067f730 (124 B) — HUD destructor/cleanup. Frees the per-slot arrays
 * (0x1f iterations) then frees the top-level arrays. __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_006ae250(int);
extern void FUN_004084e0(void *);

__declspec(naked) void FUN_0067f730(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        xor     esi, esi
loc_f736:
        push    esi
        call    FUN_006ae250
        add     esp, 0x4
        test    eax, eax
        jle     loc_f76a
        mov     eax, dword ptr [edi+0x4]
        mov     ecx, dword ptr [eax+esi*4]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [edi+0x8]
        mov     eax, dword ptr [edx+esi*4]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [edi+0xc]
        mov     edx, dword ptr [ecx+esi*4]
        push    edx
        call    FUN_004084e0
        add     esp, 0xc
loc_f76a:
        inc     esi
        cmp     esi, 0x1f
        jl      loc_f736
        mov     eax, dword ptr [edi+0x4]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [edi+0x8]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [edi+0xc]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [edi+0x1c]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [edi+0x20]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [edi+0x24]
        push    edx
        call    FUN_004084e0
        add     esp, 0x18
        pop     edi
        pop     esi
        ret
    }
}
