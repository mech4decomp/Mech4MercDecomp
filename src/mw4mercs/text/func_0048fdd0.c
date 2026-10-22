/*
 * FUN_0048fdd0 (288 B) — MLR image-instance constructor (__thiscall, RET 0x8).
 * Initializes vtable/float fields and builds several sub-objects through
 * virtual calls on a source object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00412230(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_00411f70(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00490600(void);
extern int g_0076ff30;
extern int g_0076ff78;
extern int g_0076ff70;
extern int g_0076ff64;
extern int g_0076ff58;
extern int g_007b8d88;
extern int g_007b8d8c;
extern int g_007b8d90;

__declspec(naked) void FUN_0048fdd0(void)
{
    __asm {
        sub     esp, 0x48
        mov     eax, dword ptr [esp + 0x4c]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ebx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [ebx + 0x14]
        mov     eax, 0xbf800000
        lea     edi, [esi + 0xc]
        mov     dword ptr [edi], eax
        lea     ecx, [esi + 0x7c]
        mov     dword ptr [ecx], 0
        push    edx
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0x4], eax
        mov     dword ptr [esi], offset g_0076ff30
        call    FUN_00412780
        lea     eax, [esi + 0x8]
        push    0
        push    eax
        push    offset g_0076ff78
        mov     ecx, ebx
        mov     dword ptr [eax], 0x3f800000
        call    FUN_00411d60
        push    0
        push    edi
        push    offset g_0076ff70
        mov     ecx, ebx
        mov     dword ptr [edi], 0
        mov     dword ptr [edi + 0x4], 0
        mov     dword ptr [edi + 0x8], 0
        call    FUN_00412230
        lea     ecx, [esp + 0x24]
        call    FUN_00419e70
        mov     eax, dword ptr [g_007b8d88]
        mov     ecx, dword ptr [g_007b8d8c]
        mov     edx, dword ptr [g_007b8d90]
        mov     dword ptr [esp + 0xc], eax
        push    0
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [esp + 0x18], ecx
        push    offset g_0076ff64
        mov     ecx, ebx
        mov     dword ptr [esp + 0x20], edx
        call    FUN_00411f70
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x30], ecx
        push    0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    offset g_0076ff58
        mov     ecx, ebx
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x5c], eax
        mov     dword ptr [esp + 0x24], 0
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        call    FUN_00411f70
        push    0
        push    1
        push    2
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_0041fde0
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_00490600
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x48
        ret     0x8
    }
}
