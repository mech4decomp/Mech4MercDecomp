/*
 * FUN_00604080 (482 B) — Multi-slot object setup (__thiscall, RET 0x24).
 *
 * ECX = this, 9 stack params. Initializes sub-objects at this+0x40,
 * this+0x50, this+0x48 via FUN_0041fd80/FUN_0041fcb0/FUN_0041fcd0 and
 * FUN_00603e30/FUN_00603e60, then conditionally invokes a virtual
 * method (CALL [vtbl+0x18]) and FUN_00604ba0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void *a);
extern void *__cdecl FUN_00603e30(void *a);
extern void *__cdecl FUN_00603e60(void *a, void *b);
extern void __cdecl FUN_00604ba0(void);

__declspec(naked) void __fastcall FUN_00604080(void *param1, void *param2)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x40]
        push    edi
        mov     ecx, ebx
        mov     byte ptr [esi + 0x1d], 0x0
        mov     byte ptr [esi + 0x1e], 0x0
        mov     byte ptr [esi + 0x1f], 0x0
        mov     byte ptr [esi + 0x20], 0x0
        mov     dword ptr [esi + 0x28], 0xffffffff
        call    FUN_0041fd80
        mov     ebp, dword ptr [esp + 0x14]
        mov     edi, eax
        test    edi, edi
        jz      L_6040f4
        cmp     dword ptr [edi + 0x14], ebp
        jz      L_604106
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    ebp
        mov     ecx, esi
        call    FUN_00603e30
        mov     edi, eax
        test    edi, edi
        jz      L_6040de
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ebp
        jmp     L_604106
L_6040de:
        mov     ecx, ebx
        mov     byte ptr [esi + 0x1d], 0x0
        call    FUN_0041fcb0
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], ebp
        jmp     L_604106
L_6040f4:
        push    ebp
        mov     ecx, esi
        call    FUN_00603e30
        mov     edi, eax
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
L_604106:
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jz      L_60413f
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        push    0xbf800000
        mov     ecx, edi
        mov     byte ptr [esi + 0x1e], 0x1
        call    dword ptr [edx + 0x18]
        mov     ecx, edi
        call    FUN_00604ba0
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0x14], ebp
        mov     dword ptr [esi + 0x24], eax
L_60413f:
        cmp     dword ptr [esp + 0x18], 0x1
        jz      L_60422a
        lea     ebx, [esi + 0x50]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     edi, eax
        test    edi, edi
        jz      L_604176
        cmp     dword ptr [edi + 0x14], ebp
        jz      L_60418d
        mov     ecx, dword ptr [edi + 0x48]
        cmp     ecx, dword ptr [esp + 0x18]
        jz      L_60418d
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        jmp     L_60417b
L_604176:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
L_60417b:
        push    ebp
        mov     ecx, esi
        call    FUN_00603e60
        mov     edi, eax
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
L_60418d:
        mov     al, byte ptr [esp + 0x24]
        test    al, al
        mov     ecx, dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x1d], 0x1
        mov     dword ptr [esi + 0x28], ecx
        jz      L_6041c1
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        push    0xbf800000
        mov     ecx, edi
        mov     byte ptr [esi + 0x20], 0x1
        call    dword ptr [edx + 0x18]
        mov     ecx, edi
        call    FUN_00604ba0
L_6041c1:
        lea     ebx, [esi + 0x48]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     edi, eax
        test    edi, edi
        jz      L_6041e4
        mov     ebp, dword ptr [esp + 0x18]
        cmp     dword ptr [edi + 0x14], ebp
        jz      L_6041fa
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    ebp
        jmp     L_6041e9
L_6041e4:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
L_6041e9:
        mov     ecx, esi
        call    FUN_00603e30
        mov     edi, eax
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
L_6041fa:
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        jz      L_60425b
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    0xbf800000
        mov     ecx, edi
        mov     byte ptr [esi + 0x1f], 0x1
        call    dword ptr [eax + 0x18]
        mov     ecx, edi
        call    FUN_00604ba0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x24
L_60422a:
        lea     edi, [esi + 0x50]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_60425b
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, edi
        call    FUN_0041fcb0
        add     esi, 0x48
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_60425b
        mov     ecx, esi
        call    FUN_0041fcb0
L_60425b:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x24
    }
}
