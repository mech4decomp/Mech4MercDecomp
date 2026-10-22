/*
 * FUN_005d9470 (135 B) — Constructor-style initializer: set up an object
 * header, allocate a 0x40-byte buffer, and call an init routine. RET 0x28.
 *
 * __thiscall (ECX = this), ten stack params, RET 0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __fastcall FUN_005d9470(void *this)
{
    

extern int DAT_007f2464;
extern void __cdecl FUN_006f4928(void);
extern void __cdecl FUN_1004084a1(void);
extern void __cdecl FUN_0068f120(void);
extern void __cdecl FUN_006f4934(void);
__asm {
mov     eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [DAT_007f2464]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x4], eax
        push    edx
        mov     dword ptr [esi], 0x78829c
        mov     byte ptr [esi + 0x1d], bl
        mov     dword ptr [esi + 0x8], ecx
        mov     byte ptr [esi + 0xc], bl
        mov     byte ptr [esi + 0x1c], bl
        mov     dword ptr [esi + 0x18], ebx
        call FUN_006f4928
        push    0x40
        call FUN_1004084a1
        add     esp, 0x4
        cmp     eax, ebx
        jz      L94DC
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    edx
        push    ecx
        mov     ecx, eax
        call FUN_0068f120
        jmp     L94DE
L94DC:
        xor     eax, eax
L94DE:
        mov     dword ptr [esi + 0x14], eax
        call FUN_006f4934
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x28], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x28
    }


}
