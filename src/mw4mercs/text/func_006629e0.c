/*
 * FUN_006629e0 (259 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls several virtual methods (offsets 0xe8/0x3c/0x90/0x50) and does a
 * series of FPU range checks against FUN_00637a20 results, returning 1
 * if all pass, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f1f84;

extern char __cdecl FUN_00415230(void *p);
extern int __cdecl FUN_00637b40(int a);
extern float __fastcall FUN_00637a20(int a);

__declspec(naked) void __stdcall FUN_006629e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xe8]
        test    al, al
        jz      label_00662add
        mov     edx, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [DAT_007f1f84]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        pop     edi
        jz      label_00662add
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x90]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x7e
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      label_00662add
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x90]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x7f
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     label_00662add
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x50]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x80
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      label_00662add
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x50]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x81
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     label_00662add
        mov     al, 0x1
        pop     esi
        ret     0x4

    label_00662add:
        xor     al, al
        pop     esi
        ret     0x4
    }
}
