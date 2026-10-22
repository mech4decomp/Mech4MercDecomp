/*
 * FUN_006805f0 (318 B) — __thiscall object update loop.
 *
 * Iterates over a list (FUN_00416cc0 / FUN_00416c60), and for each
 * matching element calls FUN_006803f0 / FUN_0067fb80 and updates a
 * per-index table (obfuscated pointer at 0x007dab44 ^ 0x007dab40).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7f2290;   /* 0x007f2290 */
extern int *g_7dab44;   /* 0x007dab44 (obfuscated pointer) */
extern int  g_7dab40;   /* 0x007dab40 (obfuscation key) */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern char __cdecl FUN_006803f0(void);
extern void __cdecl FUN_0041ef30(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0067fb80(void);
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_006805f0(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x10]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], 0x798950
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_68071D
        push    ebp
        push    esi
        mov     esi, dword ptr [edi + 0x28]
        mov     ebp, 0x4
L_680629:
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x50]
        push    esi
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_006803f0
        test    al, al
        jz      L_680708
        mov     eax, dword ptr [g_7f2290]
        push    0x0
        push    0x400
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef30
        push    0x8
        lea     ecx, [edi + 0x24]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        mov     edx, dword ptr [edi + 0x30]
        mov     eax, dword ptr [edi + 0x2c]
        mov     esi, dword ptr [edi + 0x28]
        push    edx
        push    eax
        push    esi
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebx
        call    FUN_0067fb80
        lea     ecx, [esp + 0x24]
        call    FUN_0041ea10
        mov     edx, dword ptr [esp + 0x24]
        push    0x0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [g_7dab44]
        push    0x0
        add     ecx, 0x59
        lea     eax, [esp + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [g_7dab40]
        mov     dword ptr [esp + 0x38], 0xffffffec
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     edx, dword ptr [eax + esi*4 + 0x242c]
        add     eax, 0x2424
        add     edx, ebp
        mov     dword ptr [eax + esi*4 + 0x8], edx
        add     dword ptr [eax + 0xc00], ebp
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
L_680708:
        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_680629
        pop     esi
        pop     ebp
L_68071D:
        lea     ecx, [esp + 0x8]
        call    FUN_00416c60
        pop     edi
        pop     ebx
        add     esp, 0x3c
        ret     8
    }
}
