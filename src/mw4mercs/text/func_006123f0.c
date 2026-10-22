/*
 * FUN_006123f0 (251 B) — __thiscall (ECX = this), RET 0xC.
 *
 * Calls several virtual/helper methods, does an obfuscated global-pointer
 * lookup (DAT_007dab44 ^ DAT_007dab40), and manages refcounted string
 * buffers (decrement/inc + free via FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab40;
extern int *DAT_007dab44;

extern void __cdecl FUN_00618a40(void);
extern int __cdecl FUN_0060cfd0(void *a, void *b, void *c);
extern void __cdecl FUN_00412570(void *p);
extern int __cdecl FUN_00416b60(void *p);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00412740(void *p);

__declspec(naked) void __stdcall FUN_006123f0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0x8]
        mov     ebx, dword ptr [eax]
        mov     eax, dword ptr [DAT_007dab40]
        mov     esi, ecx
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     ecx, dword ptr [edx + 0x44]
        xor     ecx, 0x85739531
        call    FUN_00618a40
        mov     eax, dword ptr [esi + 0x18]
        lea     ecx, [esi + 0x18]
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        push    0x76b768
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0060cfd0
        push    ebx
        lea     ecx, [esp + 0x18]
        mov     ebp, eax
        call    FUN_00412570
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        lea     edx, [esp + 0x14]
        xor     ecx, 0x85739531
        push    edx
        add     ecx, 0x54
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      label_0061248b
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0061248b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    label_0061248b:
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     dword ptr [edx + 0x80], edi
        mov     edi, dword ptr [edi + 0x14]
        test    edi, edi
        mov     dword ptr [esp + 0x14], edi
        jz      label_006124b7
        inc     byte ptr [edi - 0x1]

    label_006124b7:
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [esp + 0x14]
        push    eax
        add     ecx, 0x2c
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      label_006124e2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_006124e2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    label_006124e2:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
