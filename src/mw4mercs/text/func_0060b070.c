/*
 * FUN_0060B070 (305 B) — __thiscall (ECX = this), RET 0x8 (two stack params).
 * Reads a table of params, does a virtual call, copies/transforms float
 * arrays (8 elements each), and fills output fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern long __cdecl _ftol(double);
extern void __fastcall FUN_00416b60(void);

__declspec(naked) void __fastcall FUN_0060b070(void)
{
    __asm {
        sub     esp, 0x18
        mov     ecx, dword ptr [ecx + 4]
        test    ecx, ecx
        /* __emit: MSVC6 drops zero disp on [esp] (89 0C 24 vs ref 89 4C 24 00) */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        jz      L_196
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [esp + 4], edx
        mov     edx, dword ptr [eax + 0x10]
        push    ebx
        mov     ebx, dword ptr [eax + 0x18]
        push    ebp
        mov     ebp, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0x14]
        push    esi
        mov     esi, dword ptr [ecx + 0x9a4]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x1c]
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 0x20]
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [esi + 0x1a4]
        sub     ecx, 0
        jz      L_e3
        dec     ecx
        jz      L_dc
        dec     ecx
        jnz     L_e8
        mov     eax, dword ptr [eax + 0x50]
        mov     dword ptr [ebx], eax
        jmp     L_e8
    L_dc:
        mov     ecx, dword ptr [eax + 0x54]
        mov     dword ptr [ebx], ecx
        jmp     L_e8
    L_e3:
        mov     edx, dword ptr [eax + 0x4c]
        mov     dword ptr [ebx], edx
    L_e8:
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], eax
    L_ee:
        fld     dword ptr [esi + eax*4 + 0x180]
        fstp    dword ptr [edi + eax*4]
        mov     eax, dword ptr [esp + 0x2c]
        fild    dword ptr [ebx]
        fdivr   dword ptr [edi + eax*4]
        fstp    dword ptr [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x2c]
        inc     eax
        cmp     eax, 8
        mov     dword ptr [esp + 0x2c], eax
        jle     L_ee
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x2c], 0
        lea     edi, [eax + 0x370]
    L_125:
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, edi
        call    FUN_00416b60
        fld     dword ptr [eax + 0x1c]
        call    _ftol
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + edx*4], eax
        mov     eax, dword ptr [esp + 0x2c]
        inc     eax
        cmp     eax, 8
        mov     dword ptr [esp + 0x2c], eax
        jle     L_125
        mov     edx, dword ptr [esi + 0x1a4]
        fld     dword ptr [esi + 0x1b0]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0x1a8]
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        fstp    dword ptr [eax]
        fld     dword ptr [esi + 0x1ac]
        mov     dword ptr [edx], ecx
        call    _ftol
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], eax
        mov     eax, 1
        pop     ebx
        add     esp, 0x18
        ret     8
    L_196:
        mov     eax, 1
        add     esp, 0x18
        ret     8
    }
}
