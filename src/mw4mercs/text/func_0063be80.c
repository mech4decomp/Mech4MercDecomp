/*
 * FUN_0063BE80 (305 B) — __fastcall (ECX = this), no stack args (RET).
 * Builds a float matrix/array, calling FUN_0041fd80/FUN_004ba320 per row.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415040(int value);
extern float DAT_0078f170;                 /* constant */
extern int DAT_00858944;
extern float DAT_0076d064;                 /* constant */
extern void *__fastcall FUN_0041fd80(void *this);
extern void __fastcall FUN_004ba320(void);

__declspec(naked) void __fastcall FUN_0063be80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x100
        mov     ebp, ecx
        call    FUN_00415040
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        push    0x100
        fmul    dword ptr [DAT_0078f170]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00415040
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        mov     eax, dword ptr [DAT_00858944]
        add     esp, 8
        and     eax, 0x800000ff
        fmul    dword ptr [DAT_0078f170]
        fstp    dword ptr [esp + 0x14]
        jns     L_e0
        dec     eax
        or      eax, 0xffffff00
        inc     eax
    L_e0:
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [ebp + 0x18]
        xor     esi, esi
        test    eax, eax
        jle     L_a9
    L_f6:
        mov     ebx, 0xbf800000
        lea     eax, [esp + 0x54]
        mov     ecx, 4
    L_ff:
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax - 4], ebx
        mov     dword ptr [eax + 8], ebx
        add     eax, 0x10
        dec     ecx
        jnz     L_ff
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        push    esi
        lea     ecx, [ebp + 0x10]
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_004ba320
        fld     dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        fadd    dword ptr [DAT_0076d064]
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, eax
        mov     dword ptr [esp + 0x30], edx
        fst     dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x34], eax
        fstp    dword ptr [esp + 0x40]
        mov     eax, dword ptr [ebp + 0x18]
        lea     edx, [esi + 1]
        cmp     edx, eax
        mov     dword ptr [esp + 0x3c], ecx
        jge     L_72
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [DAT_0076d064]
        jmp     L_80
    L_72:
        fild    dword ptr [esp + 0x1c]
        fmul    dword ptr [DAT_0078f170]
        fadd    dword ptr [esp + 0x14]
    L_80:
        mov     ecx, dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, 8
        lea     esi, [esp + 0x30]
        rep movsd
        mov     esi, edx
        cmp     esi, eax
        /* __emit: backward jl rel32; MSVC6 miscomputes disp (48 vs ref 4D) */
        __emit 0x0F
        __emit 0x8C
        __emit 0x4D
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    L_a9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
