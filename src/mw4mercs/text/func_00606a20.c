/*
 * FUN_00606A20 (115 B) — __thiscall (ECX = this), plain RET.
 *
 * Destructor-style cleanup: sets vtable 0x78BA84, walks a linked list
 * at this+0x10, releasing per-node resources (FUN_0066BE50 /
 * FUN_004084E0), calling FUN_00417AD0, and dispatching a virtual call.
 * Finally calls FUN_00417980 / FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0066BE50(void *this);
extern void __cdecl FUN_004084E0(int param);
extern void __fastcall FUN_00417AD0(void *this);
extern void __fastcall FUN_00417980(void *this);
extern void __fastcall FUN_00415380(void *this);

__declspec(naked) void __fastcall FUN_00606a20(void)
{
    __asm {
        sub     esp, 0xC
        push    ebx
        push    ebp
        mov     ebx, ecx
        lea     ebp, [ebx + 0x10]
        mov     dword ptr [ebx], 0x78BA84
        mov     eax, dword ptr [ebp]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], 0x78BA88
L_loop:
        test    eax, eax
        jz      L_done
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_done
        mov     edi, dword ptr [esi + 0x10]
        test    edi, edi
        jz      L_call
        mov     ecx, edi
        call    FUN_0066BE50
        push    edi
        call    FUN_004084E0
        add     esp, 4
L_call:
        lea     ecx, [esp + 0x10]
        call    FUN_00417AD0
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x18]
        jmp     L_loop
L_done:
        mov     ecx, ebp
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret
    }
}
