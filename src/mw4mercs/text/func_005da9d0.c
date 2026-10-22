/*
 * FUN_005da9d0 (235 B) — iterates two arrays of objects (via FUN_0041fd80)
 * and assigns a rotating slot index (mod 4) to each object's +0x2FC field,
 * gated by FUN_00415230 string/name checks against two global pointers.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void *this);
extern char __stdcall FUN_00415230(void *this, void *arg);

__declspec(naked) void FUN_005da9d0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f24d8;
extern int DAT_007f23d8;
__asm {
sub     esp, 0x8
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        xor ecx, dword ptr [DAT_007dab40]
        mov     ebx, dword ptr [ecx + 0x10]
        xor     ebx, 0x85739531
        mov     eax, dword ptr [ebx + 0x54]
        xor     ebp, ebp
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        jle     LAA67
        mov     edi, dword ptr [ebx + 0x50]
        add     edi, 0x14
        mov     dword ptr [esp + 0x14], eax
LAA04:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      LAA59
        mov eax, dword ptr [DAT_007f24d8]
        mov     ebp, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, ebp
        call    FUN_00415230
        test    al, al
        jz      LAA43
        mov eax, dword ptr [DAT_007f23d8]
        push    eax
        mov     ecx, ebp
        call    FUN_00415230
        test    al, al
        jnz     LAA43
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x2fc], eax
        inc     eax
        jmp     LAA47
LAA43:
        mov     eax, dword ptr [esp + 0x10]
LAA47:
        and     eax, 0x80000003
        jns     LAA53
        dec     eax
        or      eax, 0xfffffffc
        inc     eax
LAA53:
        mov     dword ptr [esp + 0x10], eax
        mov     ebp, eax
LAA59:
        mov     eax, dword ptr [esp + 0x14]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     LAA04
LAA67:
        mov     eax, dword ptr [ebx + 0x54]
        test    eax, eax
        jle     LAAB3
        mov     esi, dword ptr [ebx + 0x50]
        add     esi, 0x14
        mov     ebx, eax
LAA76:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov     edi, eax
        test    edi, edi
        jz      LAAAD
        mov eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      LAA9C
        mov     dword ptr [edi + 0x2fc], ebp
        inc     ebp
LAA9C:
        and     ebp, 0x80000003
        jns     LAAA9
        dec     ebp
        or      ebp, 0xfffffffc
        inc     ebp
LAAA9:
        mov     dword ptr [esp + 0x10], ebp
LAAAD:
        add     esi, 0x1c
        dec     ebx
        jnz     LAA76
LAAB3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }


}
