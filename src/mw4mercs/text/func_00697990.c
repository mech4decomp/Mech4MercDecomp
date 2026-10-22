/*
 * FUN_00697990 (250 B) — __fastcall (ECX = param_1), returns float in ST0.
 *
 * Builds a small local buffer, calls several helpers, does FPU math on
 * param_1+0x18, and returns a float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00580580(void *a, void *b);
extern int __cdecl FUN_0063b370(void *a, int b);
extern void __cdecl FUN_004084e0(void *p);

extern float DAT_0076c5b0;
extern float DAT_0076d064;
extern float DAT_0077dff4;
extern float DAT_0077016c;

__declspec(naked) float __fastcall FUN_00697990(int param_1)
{
    __asm {
        sub     esp, 0x24
        push    edi
        mov     edi, ecx
        lea     ecx, [edi + 0xc]
        call    FUN_0041fd80
        test    eax, eax
        jnz     label_006979ad
        fld     dword ptr [DAT_0076c5b0]
        pop     edi
        add     esp, 0x24
        ret

    label_006979ad:
        push    esi
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xf]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_00580580
        lea     edx, [esp + 0x14]
        push    0x0
        push    edx
        call    FUN_0063b370
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     esi, ecx
        mov     edx, eax
        mov     eax, dword ptr [edi + 0x80]
        add     esp, 0x8
        sar     esi, 0x2
        cmp     eax, -0x1
        jz      label_00697a0d
        mov     eax, dword ptr [edi + 0x54]
        sub     eax, dword ptr [edi + 0x50]
        sar     eax, 0x2
        add     esi, eax

    label_00697a0d:
        fld     dword ptr [edi + 0x18]
        fcom    dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      label_00697a23
        fmul    dword ptr [DAT_0077dff4]

    label_00697a23:
        cmp     esi, edx
        fst     dword ptr [esp + 0x24]
        jle     label_00697a37
        fadd    dword ptr [DAT_0077016c]
        fstp    dword ptr [esp + 0x24]
        jmp     label_00697a39

    label_00697a37:
        fstp    st(0)

    label_00697a39:
        test    esi, esi
        jz      label_00697a5e
        mov     ecx, dword ptr [edi + 0x50]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0xc]
        push    eax
        lea     eax, [esp + 0x14]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0xc]
        lea     eax, [ecx + 0x8]
        mov     ecx, dword ptr [esp + 0x14]
        jmp     label_00697a60

    label_00697a5e:
        xor     eax, eax

    label_00697a60:
        imul    eax, esi
        test    ecx, ecx
        mov     dword ptr [esp + 0xc], eax
        pop     esi
        fild    dword ptr [esp + 0x8]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x8]
        jz      label_00697a81
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4

    label_00697a81:
        fld     dword ptr [esp + 0x8]
        pop     edi
        add     esp, 0x24
        ret
    }
}
