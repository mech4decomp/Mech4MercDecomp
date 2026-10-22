/*
 * FUN_004ceeb0 (171 B) — MLR network subsystem: connection lookup by
 * (type byte, id word) key (__thiscall, RET 4). Searches a list for a
 * matching connection, returns it or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void FUN_004cdfa0(void);
extern void FUN_00417640(void);
extern void FUN_00417700(void);
extern void FUN_004176a0(void);

__declspec(naked) void FUN_004ceeb0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     eax, ecx
        mov     cl, byte ptr [eax + 0x28]
        xor     ebx, ebx
        mov     bl, byte ptr [edi]
        cmp     bl, cl
        jz      loc_eed
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, ebx
        and     ecx, 0xff
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
loc_eed:
        push    0x1
        add     eax, 0x14
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00417640
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x771bd4
        call    FUN_00417700
        mov     esi, eax
        test    esi, esi
        jz      loc_f47
loc_f13:
        cmp     byte ptr [esi + 0x14], bl
        jnz     loc_f22
        mov     dx, word ptr [esi + 0x16]
        cmp     dx, word ptr [edi + 0x2]
        jz      loc_f33
loc_f22:
        lea     ecx, [esp + 0xc]
        call    FUN_00417700
        mov     esi, eax
        test    esi, esi
        jz      loc_f47
        jmp     loc_f13
loc_f33:
        lea     ecx, [esp + 0xc]
        call    FUN_004176a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     0x4
loc_f47:
        lea     ecx, [esp + 0xc]
        call    FUN_004176a0
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0x4
    }
}
