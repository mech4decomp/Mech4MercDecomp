/*
 * FUN_00603cd0 (150 B) — __thiscall teardown/reset for the weapon-render
 * object. Releases the three sub-objects at +0x40/+0x48/+0x50 (each via
 * FUN_0041fd80/FUN_0041fcb0), walks a linked list rooted at +0x58 calling
 * FUN_00417ad0 on a local object (vtable 0x78b8e0), then resets several
 * fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00417ad0(void);

__declspec(naked) void FUN_00603cd0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x40]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_603ced
        mov     ecx, edi
        call    FUN_0041fcb0
loc_603ced:
        lea     edi, [esi + 0x48]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_603d02
        mov     ecx, edi
        call    FUN_0041fcb0
loc_603d02:
        lea     edi, [esi + 0x50]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_603d17
        mov     ecx, edi
        call    FUN_0041fcb0
loc_603d17:
        lea     eax, [esi + 0x58]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xc], 0x78b8e0
        xor     ebx, ebx
loc_603d2e:
        cmp     eax, ebx
        jz      loc_603d45
        cmp     dword ptr [eax], ebx
        jz      loc_603d45
        lea     ecx, [esp + 0xc]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp + 0x14]
        jmp     loc_603d2e
loc_603d45:
        pop     edi
        mov     byte ptr [esi + 0x1d], bl
        mov     byte ptr [esi + 0x1e], bl
        mov     byte ptr [esi + 0x1f], bl
        mov     byte ptr [esi + 0x20], bl
        mov     dword ptr [esi + 0x14], 0x1
        mov     dword ptr [esi + 0x28], 0xffffffff
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }
}
