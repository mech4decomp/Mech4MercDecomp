/*
 * FUN_005b4470 (618 B) — __thiscall dispatcher, RET 8 (2 stack params).
 *
 * Calls FUN_005f39c0(this, p1, p3), computes a float delta, then dispatches
 * on *(*(this+0xe0)+0x14) via a jump table (values 9..0x16) to one of several
 * handlers. The jump table itself lives at 0x005b46dc (outside the function
 * slice, so not emitted here).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f39c0(void);
extern void __stdcall FUN_005f52d0(void);
extern void __stdcall FUN_005b5c00(void);
extern void __stdcall FUN_005b4e50(void);
extern char __stdcall FUN_00603db0(void);
extern void __stdcall FUN_005b57b0(void);
extern void __stdcall FUN_005b5f90(void);
extern void __stdcall FUN_005b6230(void);

__declspec(naked) void __stdcall FUN_005b4470(void)
{
    

extern int DAT_007b4384;
extern int DAT_007b8d68;
extern int DAT_007b8d6c;
extern int DAT_007b8d70;
extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_005f39c0
        fld     qword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi + 0xe0]
        fsub    qword ptr [esi + 0xe4]
        mov     eax, dword ptr [eax + 0x14]
        add     eax, -9
        cmp     eax, 0xd
        fstp    dword ptr [esp + 0xc]
        ja      default
        jmp     dword ptr [eax*4 + 0x5b46dc]

case9:
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x90]
        mov ecx, dword ptr [DAT_007b4384]
        add     eax, 0x80
        fchs
        fld     dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x10], ecx
        fchs
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x18]
        mov     edi, dword ptr [esp + 0xc]
        fchs
        fstp    dword ptr [esp + 0x1c]
        push    edi
        fmul    dword ptr [esp + 0x14]
        mov     ecx, esi
        fadd    dword ptr [esi + 0x180]
        fstp    dword ptr [esi + 0x180]
        mov     edx, dword ptr [esi]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x14]
        fadd    dword ptr [esi + 0x184]
        fstp    dword ptr [esi + 0x184]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x14]
        fadd    dword ptr [esi + 0x188]
        fstp    dword ptr [esi + 0x188]
        call    dword ptr [edx + 0x150]
        push    edi
        mov     ecx, esi
        call    FUN_005f52d0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case10:
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x150]
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        mov     ecx, esi
        call    FUN_005b5c00
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005b4e50
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case11:
        mov eax, dword ptr [DAT_007b8d68]
        mov ecx, dword ptr [DAT_007b8d6c]
        mov edx, dword ptr [DAT_007b8d70]
        lea     edi, [esi + 0x2b0]
        mov     dword ptr [edi], eax
        mov eax, dword ptr [DAT_007b8d88]
        lea     ebx, [esi + 0x2a4]
        mov     dword ptr [edi + 0x4], ecx
        mov ecx, dword ptr [DAT_007b8d8c]
        mov     dword ptr [edi + 0x8], edx
        mov edx, dword ptr [DAT_007b8d90]
        mov     dword ptr [ebx], eax
        mov     al, byte ptr [esi + 0x564]
        test    al, al
        mov     dword ptr [ebx + 0x4], ecx
        mov     dword ptr [ebx + 0x8], edx
        jz      case11_else
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx]
        push    0
        push    edx
        call    dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    0
        push    edi
        push    ebx
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x170]
        mov     edi, dword ptr [esi + 0x2f4]
        mov     ecx, edi
        call    FUN_00603db0
        test    al, al
        jz      default
        mov     eax, dword ptr [edi]
        push    0
        push    0
        push    0xa
        mov     ecx, edi
        call    dword ptr [eax + 0x8]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    0x9
        call    dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x440], 0x429c0000
        mov     byte ptr [esi + 0x514], 0x0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case11_else:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        push    0x1
        push    edi
        push    ebx
        mov     eax, 0x41200000
        push    ecx
        mov     dword ptr [esi + 0x2ac], eax
        mov     dword ptr [esi + 0x2a8], eax
        mov     eax, dword ptr [esi]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x170]
        mov     byte ptr [esi + 0x514], 0x0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case12:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    FUN_005b5c00
        mov     edx, dword ptr [esi]
        push    edi
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x16c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case13:
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005b57b0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case14:
        mov     eax, dword ptr [esi + 0x578]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005b5f90
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case15:
        mov     edx, dword ptr [esi + 0x57c]
        mov     eax, dword ptr [esp + 0xc]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005b5f90
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8

case16:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_005b6230

default:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
