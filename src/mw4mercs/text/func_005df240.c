/*
 * FUN_005df240 (245 B) — __thiscall (ECX = this), RET 0x10 (4 params).
 *
 * Constructor: calls FUN_005e1dd0(this, arg1..arg4), initializes a
 * sub-object at this+0x42C, copies 0xC dwords from 0x7b9460 to
 * this+0x454, sets up a vtable (0x788784) and many fields, calls a
 * virtual method via [EDX+4], and calls FUN_005dfd90 / FUN_005e05e0 /
 * FUN_004dabc0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e1dd0(void *this, void *a1, void *a2, void *a3, void *a4);
extern void __stdcall FUN_0041fc80(void *this);
extern int __stdcall FUN_00545460(void *ptr);
extern void __stdcall FUN_005dfd90(void *this, int a);
extern int __stdcall FUN_005e05e0(void *this);
extern void __stdcall FUN_004dabc0(void);

__declspec(naked) void *__stdcall FUN_005df240(void *a1, void *a2, void *a3, void *a4)
{
    

extern int DAT_00788760;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_005e1dd0
        lea     esi, [ebx + 0x42C]
        xor     ebp, ebp
        push    ebp
        mov     ecx, esi
        call    FUN_0041fc80
        mov ecx, dword ptr [DAT_00788760]
        mov     dword ptr [ebx + 0x448], ecx
        mov     dword ptr [esi], 0x773328
        lea     edi, [ebx + 0x454]
        mov     ecx, 0xC
        mov     esi, 0x7b9460
        rep movsd
        mov     ecx, dword ptr [ebx + 0xE0]
        mov     edx, dword ptr [ecx]
        mov     al, 0x1
        push    ebp
        mov     dword ptr [ebx + 0x438], ebp
        mov     dword ptr [ebx + 0x440], ebp
        push    0x2
        mov     dword ptr [ebx + 0x43C], ebp
        mov     dword ptr [ebx + 0x444], ebp
        mov     dword ptr [ebx + 0x44C], 0x8
        mov     byte ptr [ebx + 0x484], al
        mov     dword ptr [ebx + 0x488], ebp
        mov     dword ptr [ebx + 0x490], ebp
        mov     dword ptr [ebx], 0x788784
        mov     byte ptr [ebx + 0x41C], al
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [ebx + 0x2C]
        push    eax
        call    FUN_00545460
        add     esp, 0x4
        cmp     eax, 0x8
        jz      L_2fe
        push    eax
        mov     ecx, ebx
        call    FUN_005dfd90
    L_2fe:
        mov     ecx, ebx
        call    FUN_005e05e0
        mov     ecx, ebx
        mov     byte ptr [ebx + 0x485], al
        mov     dword ptr [ebx + 0x48C], 0xC1200000
        mov     dword ptr [ebx + 0x450], 0xFFFFFFFF
        mov     dword ptr [ebx + 0x158], ebp
        call    FUN_004dabc0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x10
    }


}
