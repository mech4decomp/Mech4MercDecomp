/*
 * FUN_10002880 (256 B) - __stdcall, RET 0x14.
 * Object-registration helper: validates a not-yet-registered object
 * (byte +0x28 == 0), allocates sub-objects via FUN_100019e0/FUN_10001a70,
 * formats a GUID via FUN_10002300, duplicates two strings via
 * FUN_10001dd0, copies a 0x10-byte GUID block into the object at +0x48,
 * and stores the string pointers at +0x58..+0x64. On failure frees
 * partial allocations via FUN_10001d60 and returns an HRESULT.
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_100019e0(void);   /* rel32 call */
extern void __stdcall FUN_10001a70(void);   /* rel32 call */
extern void __stdcall FUN_10002300(void);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10002880(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        mov     dword ptr [esp + 4], 0
        je      L_289f
        mov     eax, 0xc1120009
        pop     esi
        pop     ecx
        ret     0x14
    L_289f:
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        test    ebp, ebp
        push    edi
        je      L_2944
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        je      L_2944
        push    esi
        call    FUN_100019e0
        mov     ebx, eax
        test    ebx, ebx
        jl      L_2965
        push    esi
        call    FUN_10001a70
        mov     ebx, eax
        test    ebx, ebx
        jl      L_2965
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        call    FUN_10002300
        mov     ebx, eax
        test    ebx, ebx
        jl      L_2965
        push    ebp
        call    FUN_10001dd0
        mov     ebp, eax
        test    ebp, ebp
        je      L_2953
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        call    FUN_10001dd0
        test    eax, eax
        je      L_2953
        mov     byte ptr [esi + 0x28], 1
        mov     ecx, dword ptr [edi]
        lea     edx, [esi + 0x48]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [edi + 4]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [edi + 8]
        mov     dword ptr [edx + 8], ecx
        mov     ecx, dword ptr [edi + 0xc]
        pop     edi
        mov     dword ptr [esi + 0x58], ebp
        mov     dword ptr [edx + 0xc], ecx
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x64], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        mov     dword ptr [esi + 0x5c], edx
        mov     dword ptr [esi + 0x60], ecx
        pop     esi
        pop     ecx
        ret     0x14
    L_2944:
        pop     edi
        mov     ebx, 0x80070057
        pop     ebp
        mov     eax, ebx
        pop     ebx
        pop     esi
        pop     ecx
        ret     0x14
    L_2953:
        test    ebp, ebp
        mov     ebx, 0x8007000e
        je      L_2965
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_2965:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_2976
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_2976:
        pop     edi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        pop     esi
        pop     ecx
        ret     0x14
    }
}
