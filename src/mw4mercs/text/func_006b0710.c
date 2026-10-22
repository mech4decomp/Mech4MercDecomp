/*
 * FUN_006B0710 (45 B) — Constructor for object with vtable 0x798c44.
 *
 * Initializes all fields to zero/default, sets vtable to 0x798c44,
 * stores two parameters into fields at +0x10 and +0x04.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Disassembly:
 *   8B 54 24 08       mov     edx, [esp+8]      ; param2
 *   8B C1             mov     eax, ecx           ; return value
 *   8B 4C 24 04       mov     ecx, [esp+4]      ; param1
 *   89 48 10          mov     [eax+0x10], ecx    ; field_10 = param1
 *   33 C9             xor     ecx, ecx
 *   C7 00 44 8C 79 00 mov     dword ptr [eax], 0x798c44  ; vtable
 *   88 48 18          mov     [eax+0x18], cl     ; byte_18 = 0
 *   88 48 19          mov     [eax+0x19], cl     ; byte_19 = 0
 *   89 48 14          mov     [eax+0x14], ecx    ; field_14 = 0
 *   88 48 1A          mov     [eax+0x1a], cl     ; byte_1A = 0
 *   89 48 0C          mov     [eax+0x0c], ecx    ; field_0C = 0
 *   88 48 1B          mov     [eax+0x1b], cl     ; byte_1B = 0
 *   89 50 04          mov     [eax+0x04], edx    ; field_04 = param2
 *   C2 08 00          ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __stdcall FUN_006b0710(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax + 0x10], ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x798c44
        mov     byte ptr [eax + 0x18], cl
        mov     byte ptr [eax + 0x19], cl
        mov     dword ptr [eax + 0x14], ecx
        mov     byte ptr [eax + 0x1a], cl
        mov     dword ptr [eax + 0x0c], ecx
        mov     byte ptr [eax + 0x1b], cl
        mov     dword ptr [eax + 0x04], edx
        ret     8
    }
}
