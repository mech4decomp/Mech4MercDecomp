/*
 * FUN_00694090 (277 B) - HUD element constructor (__fastcall, this in ECX).
 * Loads AI type config, allocates/initializes a sub-object list, and walks a
 * linked list of elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_79945c[];
extern int g_7b8810;
extern char g_76cd64[];

extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00694af0(void);
extern void __cdecl FUN_00637e00(void);
extern void __cdecl FUN_00637e20(void);
extern void __cdecl FUN_00694a60(void);
extern void __cdecl FUN_00694ad0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00694470(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00694090(void *param_1)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebp, ebp
        push    ebp
        mov     esi, ecx
        push    offset g_79945c
        call    FUN_004d2000
        mov     al, byte ptr [esp + 0x13]
        mov     dword ptr [esi + 0x44], ebp
        lea     ebx, [esi + 0x44]
        mov     dword ptr [esi + 0x4c], ebp
        mov     byte ptr [esi + 0x54], al
        mov     ecx, esi
        mov     dword ptr [esi + 0x48], ebp
        mov     dword ptr [esi + 0x50], ebp
        mov     dword ptr [esi + 0x54], ebp
        call    FUN_004d2310
        push    0x50
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_6940e0
        push    esi
        mov     ecx, eax
        call    FUN_0040dd50
        mov     edi, eax
        jmp     loc_6940e2
loc_6940e0:
        xor     edi, edi
loc_6940e2:
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [esp + 0x18], ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_00694af0
        lea     edx, [esp + 0x18]
        or      edi, 0x1
        push    edx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [ebx], edi
        call    FUN_00637e00
        lea     ecx, [esp + 0x18]
        call    FUN_00637e20
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     loc_694145
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     loc_694135
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x14], ecx
        jz      loc_694145
        push    0x3
        call    FUN_00694a60
        jmp     loc_694145
loc_694135:
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x14], ecx
        jz      loc_694145
        push    0x1
        call    FUN_00694ad0
loc_694145:
        mov     eax, dword ptr [g_7b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebp
        jz      loc_694173
        mov     ecx, dword ptr [ebx]
        and     ecx, 0xfffffffc
        add     ecx, 0x44
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], offset g_76cd64
        mov     edi, eax
        jmp     loc_694175
loc_694173:
        xor     edi, edi
loc_694175:
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, ebp
        jz      loc_694192
        mov     ecx, dword ptr [eax]
        cmp     ecx, ebp
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x8], edx
        jz      loc_694192
        push    ecx
        mov     ecx, esi
        call    FUN_00694470
        jmp     loc_694175
loc_694192:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
