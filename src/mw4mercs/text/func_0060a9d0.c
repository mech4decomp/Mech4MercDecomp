/*
 * FUN_0060A9D0 (586 B) — __thiscall: walks a linked list of objects,
 * copies per-object data into a set of output arrays, then runs a
 * 4-case switch (jump table at 0x60AC1C) to append default entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f25a8;
extern int g_60ac1c[];

extern void *__cdecl FUN_00416b60(void *a);
extern int __cdecl FUN_00415230(int a);

__declspec(naked) void __stdcall FUN_0060A9D0(void *param_1, void *param_2)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x4]
        sub     esp, 0x5c
        push    ebx
        xor     ebx, ebx
        cmp     ecx, ebx
        push    esi
        push    edi
        jnz     loc_60a9eb
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x5c
        ret     8
loc_60a9eb:
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [eax + 0x28]
        mov     edi, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x24], edx
        mov     edx, dword ptr [eax + 0x20]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [eax + 0x24]
        lea     eax, [esp + 0x6c]
        push    eax
        add     ecx, 0x384
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x5c], esi
        call    FUN_00416b60
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jnz     loc_60aa57
        pop     edi
        mov     dword ptr [esi], ebx
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x5c
        ret     8
loc_60aa57:
        push    ebp
        mov     dword ptr [esp + 0x10], ebx
loc_60aa5c:
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, edi
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x18]
        sub     ecx, edi
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [eax + 0x94]
        sub     ecx, edi
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x28]
        sub     ecx, edi
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        sub     ecx, edi
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [esp + 0x30]
        sub     ecx, edi
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x34]
        sub     ebp, edi
        sub     ecx, edi
        mov     dword ptr [esp + 0x74], 0x0
        lea     esi, [edi + ebx*4]
        mov     dword ptr [esp + 0x58], ebp
        mov     dword ptr [esp + 0x54], ecx
        jmp     loc_60aac7
loc_60aabf:
        mov     edx, dword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x14]
loc_60aac7:
        test    edx, edx
        jz      loc_60ab83
        mov     ecx, dword ptr [edx]
        test    ecx, ecx
        mov     edx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x68], edx
        jz      loc_60ab83
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [ecx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_60aabf
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x10]
        cmp     dword ptr [ecx + 0x174], eax
        jnz     loc_60ab7a
        mov     edx, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [edx + 0x4]
        fild    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [eax + 0x30]
        cmp     ecx, 0x4e
        mov     edx, dword ptr [eax + 0x2c]
        fmul    dword ptr [eax + 0x54]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax + 0x28]
        mov     dword ptr [esi + ebp], ecx
        mov     ebp, dword ptr [esp + 0x3c]
        mov     dword ptr [esi + ebp], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ebp, dword ptr [esp + 0x40]
        mov     dword ptr [esi + ebp], edx
        mov     edx, dword ptr [esp + 0x44]
        fstp    dword ptr [edx + esi]
        jnz     loc_60ab47
        mov     dword ptr [edx + esi], 0x42200000
loc_60ab47:
        mov     ecx, dword ptr [eax + 0x58]
        fld     dword ptr [eax + 0x3c]
        mov     edx, dword ptr [esp + 0x48]
        fadd    st(0), st(0)
        mov     ebp, dword ptr [esp + 0x58]
        mov     dword ptr [edx + esi], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x50]
        fstp    dword ptr [ecx + esi]
        mov     ecx, dword ptr [esp + 0x74]
        mov     dword ptr [edx + esi], ecx
        mov     edx, dword ptr [eax + 0x6c]
        mov     eax, dword ptr [esp + 0x54]
        mov     dword ptr [eax + esi], edx
        inc     ebx
        add     esi, 0x4
loc_60ab7a:
        inc     dword ptr [esp + 0x74]
        jmp     loc_60aabf
loc_60ab83:
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, 0x3
        ja      loc_60abf7
        jmp     dword ptr [edx*4 + g_60ac1c]
loc_60ab93:
        mov     ecx, dword ptr [eax + 0xa4]
        jmp     loc_60abb1
loc_60ab9b:
        mov     ecx, dword ptr [eax + 0xa8]
        jmp     loc_60abb1
loc_60aba3:
        mov     ecx, dword ptr [eax + 0xac]
        jmp     loc_60abb1
loc_60abab:
        mov     ecx, dword ptr [eax + 0xb0]
loc_60abb1:
        test    ecx, ecx
        jle     loc_60abf7
        mov     esi, dword ptr [esp + 0x18]
        mov     dword ptr [esi + ebx*4], 0xffffffff
        mov     esi, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + ebx*4], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [ecx + ebx*4], 0xbf800000
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [ecx + ebx*4], 0xbf800000
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [ecx + ebx*4], 0xbf800000
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [edi + ebx*4], edx
        mov     dword ptr [ecx + ebx*4], 0xbf800000
        inc     ebx
loc_60abf7:
        inc     edx
        cmp     edx, 0x3
        mov     dword ptr [esp + 0x10], edx
        jle     loc_60aa5c
        mov     edx, dword ptr [esp + 0x5c]
        pop     ebp
        pop     edi
        pop     esi
        mov     dword ptr [edx], ebx
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x5c
        ret     8
    }
}
