/*
 * FUN_005f7ed0 (257 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Iterates a loop building/registering sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_006f4950(void);
extern void __stdcall FUN_004e6160(void);
extern void __stdcall FUN_004e6080(void);
extern void __stdcall FUN_006f49a0(void);
extern void __stdcall FUN_005b6e30(void);
extern void __stdcall FUN_005b6ca0(void);
extern void __stdcall FUN_00416a90(void);
extern void __stdcall FUN_004d2330(void);
extern void __stdcall FUN_004d21c0(void);

extern int g_7b8c0c;
extern int g_7dc76c;
extern int g_7dd234;

__declspec(naked) void __stdcall FUN_005f7ed0(void *p1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x44
        push    edi
        push    0x1
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_004d1f80
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x20]
        sub     ecx, edx
        add     ecx, eax
        jz      loc_7fb8
        push    esi
loc_7efd:
        mov     eax, dword ptr [esp + 0x8]
        push    0x4
        lea     edx, [esp + 0x54]
        push    edx
        lea     ecx, [esp + 0x10]
        call    dword ptr [eax + 0x20]
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [g_7b8c0c]
        mov     eax, dword ptr [g_7dc76c]
        mov     esi, dword ptr [edx + ecx*0x4]
        cmp     esi, eax
        mov     eax, dword ptr [g_7dd234]
        push    eax
        jnz     loc_7f63
        call    FUN_006f4950
        push    0x58
        call    FUN_004e6160
        add     esp, 0x4
        test    eax, eax
        jz      loc_7f4f
        lea     ecx, [esp + 0x8]
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_004e6080
        mov     esi, eax
        jmp     loc_7f51
loc_7f4f:
        xor     esi, esi
loc_7f51:
        call    FUN_006f49a0
        lea     edx, [esi + 0x34]
        push    edx
        push    esi
        lea     ecx, [edi + 0x370]
        jmp     loc_7f9c
loc_7f63:
        call    FUN_006f4950
        push    0xc4
        call    FUN_005b6e30
        add     esp, 0x4
        test    eax, eax
        jz      loc_7f8a
        lea     ecx, [esp + 0x8]
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_005b6ca0
        mov     esi, eax
        jmp     loc_7f8c
loc_7f8a:
        xor     esi, esi
loc_7f8c:
        call    FUN_006f49a0
        lea     edx, [esi + 0x3c]
        push    edx
        push    esi
        lea     ecx, [edi + 0x384]
loc_7f9c:
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x24]
        sub     eax, edx
        add     eax, ecx
        jnz     loc_7efd
        pop     esi
loc_7fb8:
        lea     ecx, [esp + 0x4]
        call    FUN_004d2330
        lea     ecx, [esp + 0x4]
        call    FUN_004d21c0
        pop     edi
        add     esp, 0x44
        ret     0x4
    }
}
