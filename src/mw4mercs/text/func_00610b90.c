/*
 * FUN_00610b90 (164 B) — __thiscall (ECX = this). Stores three params
 * into this+0xac/b0/b4, calls a virtual at +0x34, then sprintf
 * (via IAT 0x76b420) into a stack buffer with "%s:%d" and "%d/%d",
 * calling FUN_00560420 on each. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab40;
extern int g_7dab44;
extern void* g_76b420;   /* IAT: sprintf */
extern void __cdecl FUN_00560420(void);

__declspec(naked) void __fastcall FUN_00610b90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x34
        push    ebx
        mov     ebx, dword ptr [esp + 0x44]
        push    ebp
        mov     ebp, dword ptr [g_7dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp + 0x4c]
        xor     edx, ebp
        mov     ecx, dword ptr [edx + 0xc]
        push    eax
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0xac], eax
        mov     eax, dword ptr [ecx]
        push    0x2d7
        mov     dword ptr [esi + 0xb0], edi
        mov     dword ptr [esi + 0xb4], ebx
        call    dword ptr [eax + 0x34]
        mov     ebp, dword ptr [g_76b420]
        push    eax
        lea     ecx, [esp + 0x18]
        push    0x78c17c
        push    ecx
        call    ebp
        mov     ecx, dword ptr [esi + 0xb8]
        add     esp, 0x10
        push    0x0
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_00560420
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    0x78c174
        push    eax
        call    ebp
        add     esp, 0x10
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esi + 0xbc]
        call    FUN_00560420
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
