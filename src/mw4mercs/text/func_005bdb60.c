/*
 * FUN_005bdb60 (940 B) - __stdcall, RET 4 (1 param).
 *
 * Entity update/placement logic: reads entity transforms, computes
 * deltas, and dispatches to FUN_005ef680 for each matching entity.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_0041fd80(void *this);
extern void __fastcall FUN_00419460(void *this, void *p);
extern void *__fastcall FUN_0040c0e0(void *this);
extern void *__cdecl FUN_00507f90(void *p);
extern void __fastcall FUN_0040c5d0(void *this, void *p);
extern void __fastcall FUN_0041c7d0(void *this, void *a, void *b);
extern void __fastcall FUN_0040c410(void *this, void *p);
extern void __fastcall FUN_0040c9c0(void *this, int a, int b, int c);
extern void __fastcall FUN_00766c60(void *this, void *p);
extern void *__fastcall FUN_004e2f40(void *this, void *p);
extern char __fastcall FUN_00415230(void *this, void *p);
extern char __fastcall FUN_005e3cc0(void *this, void *p);
extern void __fastcall FUN_005ef680(void *this, void *a, void *b, void *c, void *d);

__declspec(naked) void __stdcall FUN_005bdb60(void *param_1)
{
    

extern int DAT_007db090;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc728;
extern int DAT_007f25c0;
extern int DAT_007f2548;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xd4
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        mov     al, byte ptr [ebx + 0xb8]
        test    al, al
        push    esi
        push    edi
        jnz     done
        lea     esi, [ebx + 0x14]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      done
        mov     ecx, esi
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007db090]
        mov     dl, byte ptr [ecx + 0x28]
        mov     edi, eax
        mov     al, byte ptr [edi + 0x14]
        cmp     al, dl
        mov     dword ptr [esp + 0xc], edi
        jz      done
        mov     eax, dword ptr [edi + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x84]
        call    FUN_00419460
        lea     esi, [edi + 0x400]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      no_esi
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], eax
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        jmp     copy12
no_esi:
        mov     ecx, dword ptr [edi + 0x3f8]
        lea     eax, [edi + 0x3f8]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x1c], 0x77d13c
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      after_copy
        mov     ecx, dword ptr [esi + 0x198]
        test    ecx, ecx
        jz      after_copy
        lea     edx, [esp + 0xb0]
        push    edx
        call    FUN_00507f90
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0x18], eax
        push    ecx
        mov     ecx, dword ptr [esi + 0x198]
        call    FUN_00507f90
        mov     ecx, 0xc
        mov     esi, eax
copy12:
        lea     edi, [esp + 0x80]
        rep movsd
        mov     edi, dword ptr [esp + 0xc]
after_copy:
        push    0x7b8d88
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        lea     esi, [ebx + 0x1c]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      no_esi2
        mov edx, dword ptr [DAT_007dab44]
        mov edi, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, edi
        mov     edi, dword ptr [eax + 0x1c]
        mov     ecx, esi
        xor     edi, 0x85739531
        call    FUN_0041fd80
        cmp     eax, edi
        jz      use_ebx24
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        lea     ecx, [ebx + 0x24]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0041c7d0
        jmp     after_24
use_ebx24:
        lea     eax, [ebx + 0x24]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
after_24:
        fld     dword ptr [esp + 0x34]
        mov     edi, dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x30]
        jmp     after_fsub
no_esi2:
        fld     dword ptr [ebx + 0x24]
        mov     ecx, dword ptr [ebx + 0x28]
        fsub    dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x2c]
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], edx
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x30]
after_fsub:
        push    0x0
        push    0x3f800000
        push    0x0
        lea     ecx, [esp + 0x64]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_0040c410
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_00766c60
        lea     ecx, [ebx + 0x14]
        mov     dword ptr [esp + 0x7c], 0x44bb8000
        call    FUN_0041fd80
        lea     edx, [esp + 0x64]
        mov     dword ptr [esp + 0x40], edx
        lea     ecx, [esp + 0x58]
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x44], ecx
        mov ecx, dword ptr [DAT_007dc728]
        push    edx
        mov     dword ptr [esp + 0x4c], 0x0
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x58], 0x2000
        call    FUN_004e2f40
        mov     ecx, esi
        mov     dword ptr [esp + 0xc], eax
        call    FUN_0041fd80
        test    eax, eax
        jz      use_ret
        mov     ecx, esi
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007f25c0]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jz      use_ret
        mov     ecx, esi
        call    FUN_0041fd80
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [edi + 0x3f8]
        jmp     loop_check
use_ret:
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [edi + 0x3f8]
        jmp     loop_check
call_5ef680:
        mov     ecx, esi
        call    FUN_005ef680
loop_cont:
        mov     eax, dword ptr [esp + 0x24]
loop_check:
        test    eax, eax
        jz      done
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x24], ecx
        jz      done
        mov     edi, dword ptr [esi + 0x184]
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, 0x1
        mov     ecx, edi
        shl     edx, cl
        test    edx, eax
        jz      loop_cont
        mov eax, dword ptr [DAT_007f2548]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      no_2548
        lea     ecx, [ebx + 0x1c]
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_005e3cc0
        test    al, al
        jz      skip_set
        mov     eax, dword ptr [ebx + edi*0x4 + 0x34]
        mov     byte ptr [esi + 0x220], 0x0
        mov     dword ptr [esi + 0x224], eax
skip_set:
        lea     ecx, [ebx + 0x1c]
        call    FUN_0041fd80
        fld     dword ptr [ebx + 0x30]
        mov     ecx, dword ptr [ebx + 0xb4]
        push    ecx
        mov     dword ptr [esp + 0x54], eax
        lea     eax, [ebx + 0x24]
        push    eax
        sub     esp, 0x8
        lea     edx, [esp + 0x50]
        fstp    qword ptr [esp]
        push    edx
        jmp     call_5ef680
no_2548:
        mov     eax, dword ptr [ebx + 0xb4]
        fld     dword ptr [ebx + 0x30]
        push    eax
        push    0x7b8d88
        sub     esp, 0x8
        lea     ecx, [esp + 0x50]
        fstp    qword ptr [esp]
        push    ecx
        jmp     call_5ef680
done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }


}
