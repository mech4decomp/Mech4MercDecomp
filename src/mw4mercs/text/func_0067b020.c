/*
 * FUN_0067b020 (225 B) — __cdecl, 1 param, returns int. Parses a string
 * header, calls FUN_00547ba0 / FUN_0067c040 / FUN_0067b110, memmoves a
 * buffer range (via IAT 0x0076b28c), calls FUN_005e1c30, frees the buffer,
 * and returns a packed value derived from two bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b28c;   /* IAT: memmove @ 0x0076b28c */

extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_0067c040(void);
extern void __cdecl FUN_0067b110(void);
extern void __cdecl FUN_005e1c30(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) int FUN_0067b020(void)
{
    __asm {
        sub     esp, 0x1c
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     al, byte ptr [esi + 0x8]
        push    edi
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esp + 0x30], al
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_00547ba0
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0067c040
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_0067b110
        mov     edi, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [esp + 0x14]
        sub     ecx, edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, edx
        sub     eax, edi
        add     esp, 0x4
        mov     dword ptr [esp + 0x28], eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x8], ecx
        lea     eax, [esp + 0x28]
        jc      L_b09f
        lea     eax, [esp + 0x8]
    L_b09f:
        mov     esi, dword ptr [eax]
        add     esi, edi
        cmp     edi, esi
        jz      L_b0c2
        sub     edx, esi
        inc     edx
        push    edx
        push    esi
        push    edi
        call    dword ptr [g_76b28c]
        mov     eax, dword ptr [esp + 0x1c]
        sub     edi, esi
        add     esp, 0xc
        add     eax, edi
        mov     dword ptr [esp + 0x10], eax
    L_b0c2:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_005e1c30
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        movsx   ecx, byte ptr [eax]
        lea     edx, [ecx + ecx*4]
        movsx   ecx, byte ptr [eax + 0x1]
        lea     esi, [ecx + edx*2 + 0xfffffdf0]
        jz      L_b0f9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_b0f9:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x1c
        ret
    }
}
